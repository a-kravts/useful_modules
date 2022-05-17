#!/bin/sh
#filename: test_string_compare.sh

rm -f test_loop test_recursion
for prog in test_loop test_recursion ; do
    make $prog 1> /dev/null
    if [ ! -e $prog ] ; then
        echo "Error: file $prog doesn't exist"
        exit 1
    fi
    while read str1 str2 val ; do
        res=`./$prog "$str1" "$str2"`
        if [ "$res" != "$val" ] ; then
            echo "$prog\nTEST $str1 $str2 $val FAILED:"
            echo "expected: <$val>,"
            echo "got:      <$res>"
        fi
    done << END
    Good\ morning    Good\ morning    equal
    Good\ morning    good\ morning    less
    Good\            Good\ morning    less
    Good\ morning    Good             more
    good             Good             more
END
done
