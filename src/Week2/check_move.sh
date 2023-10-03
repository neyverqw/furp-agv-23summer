#! /bin/bash

source devel/setup.bash
{
#gnome-terminal -t "start_core" -x bash -c "roscore; exec bash"
gnome-terminal -t "start_turtle" -x bash -c "roslaunch communication start_turtle.launch; exec bash"
gnome-terminal -t "test_server" -x bash -c "rosrun communication demo03_cli_p.py 1.0 1.0; exec bash"   
}

# gnome-terminal --tab  --title="start_core" --command="bash -c 'roscore;'"
# gnome-terminal --tab  --title="start_turtle" --command="bash -c 'source devel/setup.bash; roslaunch communication start_turtle.launch;'"
# gnome-terminal --tab  --title="test_server" --command="bash -c 'source devel/setup.bash; rosrun communication demo03_cli_p.py 1.0 1.0;'"

# gnome-terminal -t "start_core" -x bash -c "roscore; exec bash"
# gnome-terminal -t "start_turtle" -x bash -c "source devel/setup.bash && roslaunch communication start_turtle.launch; exec bash"
# gnome-terminal -t "test_server" -x bash -c "source devel/setup.bash && rosrun communication demo03_cli_p.py 1.0 1.0; exec bash"