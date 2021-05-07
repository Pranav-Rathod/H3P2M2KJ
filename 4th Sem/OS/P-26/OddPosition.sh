clear
echo -e "\nPranav Rathod - 91900103062\n"

echo -n "Enter 6 digit number : "
read num
digit=0
for((i=6;i>0;i--))
do
  rem=$((num%10))
  digit=$rem
  if [ $i -eq 1 ]
  then 
    echo $digit
  elif [ $i -eq 3 ]
  then 
    echo $digit
  elif [ $i -eq 5 ]
  then 
    echo $digit
  fi
  num=`expr $num / 10`
done