#!/bin/sh
#filename: test_string_length.sh

rm -f test
make_res=`make test`

if [ -n "make_res" ] ; then
	exit 1
fi
while read str num ; do
    res=`./test "$str"`
    if [ "$res" != "$num" ] ; then
        echo TEST $str $num FAILED:
        echo "expected: <$num>,"
        echo "got:      <$res>"
    fi
done << END
Today\ is\ a\ good\ day      19
Today\ is\ a\ good\ day...   22
END
