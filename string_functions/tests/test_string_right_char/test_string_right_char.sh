#!/bin/sh
#filename: test_string_right_char.sh

rm -f test_reverse test_direct
for prog in test_reverse test_direct ; do
    make $prog 1> /dev/null
    if [ ! -e $prog ] ; then
        echo "Error: file $prog doesn't exist"
        exit 1
    fi
    while IFS="|" read str chr val ; do
        res=`./$prog "$str" "$chr"`
        if [ "$res" = "Fault" ] ; then
            echo "$prog: address error"
            exit 1
        fi
        if [ "$res" != "$val" ] ; then
            echo "$prog\nTEST $str $chr $val FAILED:"
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
done
