#!/bin/sh

<<<<<<< HEAD
echo "int foo(void) { char X[200]; return 3; }" | $* -S -x c -c -O0 -mcmodel=kernel -fstack-protector - -o - 2> /dev/null | grep -q "%gs"
=======
echo "int foo(void) { char X[200]; return 3; }" | $* -S -x c -c -O0 -mcmodel=kernel -fno-PIE -fstack-protector - -o - 2> /dev/null | grep -q "%gs"
>>>>>>> common/deprecated/android-3.18
if [ "$?" -eq "0" ] ; then
	echo y
else
	echo n
fi
