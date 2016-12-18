#!/bin/sh

ARRAY=(10 9 8 7 6 5 4 3 2 1)
SZ=10

#echo before
echo "${ARRAY[@]}"

#selection sort
for (( i=0; i<(SZ-1); i++ ))
do
	MIN=$i
	for (( j=i+1; j<SZ; j++ ))
	do
		if [[ ${ARRAY[$j]} -lt ${ARRAY[$MIN]} ]]; then
			MIN=$j
		fi
	done
	
	#swap	
	if [ "$MIN" -ne "$i" ]; then
		VAR=${ARRAY[$MIN]}
		ARRAY[$MIN]=${ARRAY[$i]}
		ARRAY[$i]=$VAR
	fi
done

#display after
echo "${ARRAY[@]}"
