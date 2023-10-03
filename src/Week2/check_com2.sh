source devel/setup.bash
{
gnome-terminal -t "start_core" -x bash -c "roscore; exec bash"
gnome-terminal -t "start_pub" -x bash -c "rosrun communication demo02_ser_p.py; exec bash"
gnome-terminal -t "start_sub" -x bash -c "rosrun communication demo02_cli_p.py; exec bash"
}
