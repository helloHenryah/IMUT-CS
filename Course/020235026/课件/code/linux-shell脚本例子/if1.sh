echo -n "name1 :"
read name1
echo -n "name2 :"
read name2
if test "$name1" = "$name2"
then
	echo "match"
fi
echo "end the program"
