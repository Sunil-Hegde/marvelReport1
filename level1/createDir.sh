#/bin/bash

a=1
while [ $a -lt 11 ]
    do
        mkdir task$a
    a=`expr $a + 1`
done