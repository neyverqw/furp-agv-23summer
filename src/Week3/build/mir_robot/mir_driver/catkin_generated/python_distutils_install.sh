#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/src/mir_robot/mir_driver"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/install/lib/python3/dist-packages:/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/build/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/build" \
    "/usr/bin/python3" \
    "/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/src/mir_robot/mir_driver/setup.py" \
     \
    build --build-base "/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/build/mir_robot/mir_driver" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/install" --install-scripts="/home/shao/Desktop/Gitlab/furp-agv-23summer/src/Week3/install/bin"
