#!/bin/sh

#check for only 3 params
if [ $# -ne 3 ]; then
	echo "not 3 parameters"
	exit 1
fi

#compare values
if [ "$1" -gt  "$2" -a "$1" -gt "$3" ]; then
	echo "$1 is greatest"
elif [ "$2" -gt "$1" -a "$2" -gt "$3" ];  then
	echo "$2 is the greatest"
else
	echo "$3 is the greatest"
fi

