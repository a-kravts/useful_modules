#!/bin/sh
#filename: test_string_string.sh

rm -f prog
make prog 1> /dev/null
if [ ! -e prog ] ; then
    echo "Error: file 'prog' doesn't exist"
    exit 1
fi
while IFS="|" read str sub val; do
    res=`./prog "$str" "$sub"`
    if [ "$res" = "Fault" ] ; then
        echo "Address error"
        exit 2
    fi
    if [ "$res" != "$val" ] ; then
        echo "TEST <$str> <$sub> <$val> FAILED:"
        echo "expected: <$val>,"
        echo "got:      <$res>"
    fi
done << END
Good afternoon|Good afternoon|Found|
Good afternoon|Good|Found|
Good afternoon|after|Found|
Good afternoon|on|Found|
Good afternoon|Bad evening|Null|
Good afternoon|Goose|Null|
Good afternoon|noob|Null|
END
