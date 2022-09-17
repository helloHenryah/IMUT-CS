if test $# -eq 0
    	then
    	echo "you must have at least one argument."
    	exit 1
fi
if test -f "$1"
    	then
    	echo "$1 is file in the working directory."
    	else
    	echo "$1 is neither a file nor a directory."
fi
