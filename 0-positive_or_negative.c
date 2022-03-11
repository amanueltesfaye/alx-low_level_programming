echo "Enter a number:"
read n

if [ $n -eq 0 ]
then
echo "$n is zero"
elif [ $n -gt 0 ]
then
echo "$n number is positive"
else
echo "$n number is negative"
fi
  
