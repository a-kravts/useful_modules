#!/bin/sh
#filename: test_string_n_compare.sh

rm -f test_loop test_recursion
for prog in test_loop test_recursion ; do
    make $prog 1> /dev/null
    if [ ! -e $prog ] ; then
        echo "Error: file $prog doesn't exist"
        exit 1
    fi
    while read str1 str2 num val ; do
        res=`./$prog "$str1" "$str2" $num`
        if [ "$res" != "$val" ] ; then
            echo "$prog\nTEST $str1 $str2 $num $val FAILED:"
            echo "expected: <$val>,"
            echo "got:      <$res>"
        fi
    done << END
    Good\ morning    Good\ morning    12    equal
    Good\ morning    Good\ morning    4     equal
    Good\ morning    good\ morning    12    less
    Good\            Good\ morning    6     less
    Good\ morning    Good             6     more
    good             Good             1     more
END
done
