#!/bin/sh
#filename: test_string_char.sh

rm -f test_p
make test_p 1> /dev/null
if [ ! -e $test_p ] ; then
    echo "Error: file $test_p doesn't exist"
    exit 1
fi
while IFS="|" read str chr val ; do
    res=`./test_p "$str" "$chr"`
    if [ "$res" != "$val" ] ; then
        echo "TEST <$str> <$chr> <$val> FAILED:"
        echo "expected: <$val>,"
        echo "got:      <$res>"
    fi
done << END
Good morning|G|G|
Good morning|m|m|
Good morning|g|g|
Good morning| | |
Good morning|||
Good morning|f|NULL|
Good morning|T|NULL|
END
