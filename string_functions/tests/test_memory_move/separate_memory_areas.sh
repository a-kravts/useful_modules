#!/bin/sh
#filename: separate_memory_areas.sh

CHR=0
INT=1
DBL=2
PROG=separate_memory_areas
rm -f $PROG
make $PROG 1> /dev/null
if [ ! -e $PROG ] ; then
    echo "Error: file '$PROG' doesn't exist"
    exit 1
fi
while IFS="|" read code el1 el2 el3 val; do
    res=`./$PROG $code $el1 $el2 $el3`
    if [ "$res" != "$val" ] ; then
        echo "TEST <$code> <$el1> <$el2> <$el3> FAILED:"
        echo "expected: <$val>,"
        echo "got:      <$res>"
    fi
done << END
$CHR|s|u|n|sun|
$CHR|m|a|n|man|
$INT|1|2|3|1 2 3|
$INT|-1|-2|-3|-1 -2 -3|
$DBL|1.1|2.2|3.3|1.1 2.2 3.3|
$DBL|8e2|8e-1|8e1|800.0 0.8 80.0|
END
