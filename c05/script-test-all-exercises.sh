#!/bin/bash


#echo " Exercises 00-07 will be tested now!!!"



echo "------------------------------------------------------------"
echo "-----------------------Test with Norminette-----------------"
echo "------------------------------------------------------------"
echo ""

for dir in ../ex*
do
        i=$(echo $dir | awk -F"ex" '{print $2}')
        echo ""
        echo "---------------  Exercise ${i} is tested now! --------------"
        echo ""
        echo "Test with Norminette"
        norminette -R CheckForbiddenSourceHeader ${dir}/ft_*.c
        echo ""
done

echo ""
echo "------------------------------------------------------------"
echo "---Test whether all files can be compiled independently-----"
echo "------------------------------------------------------------"
echo ""

for dir in ../ex*
do
        i=$(echo $dir | awk -F"ex" '{print $2}')
        echo ""
        echo "---------------  Exercise ${i} is tested now! --------------"
        echo ""
        echo "Test with gcc -c"
       gcc -c ${dir}/ft_*.c
       rm ft_*.o
       echo ""
done


echo ""
echo "------------------------------------------------------------"
echo "-----------------------Test of the code --------------------"
echo "------------------------------------------------------------"


for dir in ../ex*
do
        i=$(echo $dir | awk -F"ex" '{print $2}')
        echo ""
        echo "---------------  Exercise ${i} is tested now! --------------"
        echo ""
        if [ -f main${i}.c ]
        then
                gcc  -Wall -Wextra -Werror main${i}.c && ./a.out
        else
                echo " main file does not exist"
        fi
        echo ""
done
