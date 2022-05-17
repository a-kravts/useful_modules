#!/bin/sh
#filename: one_memory_area.sh

CHR=0
INT=1
DBL=2
PROG=one_memory_area
rm -f $PROG
make $PROG 1> /dev/null
if [ ! -e $PROG ] ; then
    echo "Error: file '$PROG' doesn't exist"
    exit 1
fi
while IFS="|" read code num src_shift dest_shift el1 el2 el3 el4 val; do
    res=`./$PROG $code $num $src_shift $dest_shift $el1 $el2 $el3 $el4`
    if [ "$res" != "$val" ] ; then
        echo "TEST <$code> <$num> <$el1> <$el2> <$el3> <$el4> FAILED:"
        echo "expected: <$val>,"
        echo "got:      <$res>"
    fi
done << END
$CHR|3|0|1|s|u|n|+|ssun|
$CHR|3|1|0|+|m|a|n|mann|
$INT|3|0|1|3|5|8|0|3 3 5 8|
$INT|3|1|0|+0|-1|-2|-3|-1 -2 -3 -3|
$DBL|3|0|1|1.1|2.2|3.3|0.0|1.1 1.1 2.2 3.3|
$DBL|3|1|0|0e0|8e2|8e-1|8e1|800.0 0.8 80.0 80.0|
END
