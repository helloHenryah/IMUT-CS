#!/bin/sh
#scope=[1 2 3 4 5]
for number in 1 2 3 4 5 6 7 8 9 10 11
do
 	if [ $number -le 3 ] ; then
		echo "continue"
		continue
	fi
	echo $number
	
	if [  $number -ge 9 ] ;then
		echo "break"
		break
	fi
done
