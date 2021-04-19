# Even Number

echo -n "Enter Number : "
read Num

i=1
while [ $i -le $Num ]
do
    if [ `expr $i % 2` -eq 0 ]
    then
    echo $i
    fi
    i=`expr $i + 1`
done