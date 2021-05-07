clear
echo -e "\nPranav Rathod - 91900103062\n"

echo -n "Enter File Name : "
read fname

echo $fname | sort -n $fname
echo -e "\n"
echo $fname | sort -nr $fname