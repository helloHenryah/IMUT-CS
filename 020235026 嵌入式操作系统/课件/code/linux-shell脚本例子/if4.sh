#!/bin/bash
echo "type in the user name"
read user
if
	who | grep $user
then
	echo "$user has logged in the system."
elif
	grep $user /etc/passwd
then
	echo "$user has not logged in the system."
else
	echo "$user is not a valid user in the system."
fi
