#!/bin/sh
#filename: test_memory_set.sh

rm -f test_p
make test_p 1> /dev/null
if [ ! -e test_p ] ; then
    echo "Error: file 'test_p' doesn't exist"
    exit 1
fi
while IFS="|" read chr num val ; do
    res=`./test_p "$chr" $num`
    if [ "$res" != "$val" ] ; then
        echo "TEST <$chr> <$num> <$val> FAILED:"
        echo "expected: <$val>,"
        echo "got:      <$res>"
    fi
done << END
G|10|GGGGGGGGGG|
m|5|mmmmm|
 |1| |
*|7|*******|
9|3|999|
END
