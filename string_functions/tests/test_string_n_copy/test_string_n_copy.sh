#!/bin/sh
#filename: test_string_n_copy.sh

rm -f test
make_res=$(make test)

if [ -n "make_res" ] ; then
	exit 1
fi
while read src dest size; do
    res=`./test "$src" $size`
    if [ "$res" != "$dest" ] ; then
        echo TEST $src $dest $size FAILED:
        echo "expected: <$dest>,"
        echo "got:      <$res>"
    fi
done << END
Good\ afternoon    Good\ afternoon    30
Good\ afternoon    Good\ afternoon    15
Good\ afternoon    Good               4
END
