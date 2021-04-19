for i in {0..6}
do
    next=$(date +%A -d "$DATE + $i day")
    echo $next
done