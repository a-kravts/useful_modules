#!/bin/sh
#filename: test_string_copy.sh

rm -f test
make_res=`make test`

if [ -n "make_res" ] ; then
	exit 1
fi
while read str ; do
    res=`./test "$str"`
    if [ "$res" != "$str" ] ; then
        echo TEST $str FAILED:
        echo "expected: <$str>,"
        echo "got:      <$res>"
    fi
done << END
Today\ is\ a\ good\ day
Yesterday\ was\ not\ bad\ either
END
