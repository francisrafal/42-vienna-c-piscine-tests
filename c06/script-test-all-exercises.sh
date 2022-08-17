#!/bin/bash


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

#echo ""
#echo "------------------------------------------------------------"
#echo "---Test whether all files can be compiled independently-----"
#echo "------------------------------------------------------------"
#echo ""
#
#for dir in ../ex*
#do
#        i=$(echo $dir | awk -F"ex" '{print $2}')
#        echo ""
#        echo "---------------  Exercise ${i} is tested now! --------------"
#        echo ""
#        echo "Test with gcc -c"
#	gcc -c ${dir}/ft_*.c
#	rm ft_*.o
#	echo ""
#done


echo ""
echo "------------------------------------------------------------"
echo "-----------------------Test of the code --------------------"
echo "------------------------------------------------------------"

i=0;
echo ""
echo "----------------------- Exercise 0${i}-------------------------"
echo ""
        if [ -f ../ex0${i}/ft*.c ]
        then
		echo "standard primary output"
                gcc  -Wall -Wextra -Werror ../ex0${i}/ft*.c && ./a.out
		echo "-----"
		echo "primary output: hello "
		gcc  -Wall -Wextra -Werror ../ex0${i}/ft*.c -o hello && ./hello
		echo "----"
        else
                echo " main file does not exist"
        fi

i=1;
echo ""
echo "----------------------- Exercise 0${i}-------------------------"
echo ""

        if [ -f ../ex0${i}/ft*.c ]
        then
                echo "./a.out \"test1\" \"test2\" \"test3\""
                gcc  -Wall -Wextra -Werror ../ex0${i}/ft*.c && ./a.out "test1" "test2" "test3"
                echo "----"
                echo "./hello "
                gcc  -Wall -Wextra -Werror ../ex0${i}/ft*.c -o hello && ./hello
		echo "----"
        else
                echo " main file does not exist"
        fi

i=2;
echo ""
echo "----------------------- Exercise 0${i}-------------------------"
echo ""

        if [ -f ../ex0${i}/ft*.c ]
        then
                echo "./a.out \"test1\" \"test2\" \"test3\""
                gcc  -Wall -Wextra -Werror ../ex0${i}/ft*.c && ./a.out "test1" "test2" "test3"
                echo "----"
                echo "./hello "
                gcc  -Wall -Wextra -Werror ../ex0${i}/ft*.c -o hello && ./hello
		echo "----"
        else
                echo " main file does not exist"
        fi
        echo ""

i=3;
echo ""
echo "----------------------- Exercise 0${i}-------------------------"
echo ""

        if [ -f ../ex0${i}/ft*.c ]
        then
                echo "./a.out \"test1\" \"test2\" \"test3\""
                gcc  -Wall -Wextra -Werror ../ex0${i}/ft*.c && ./a.out "test1" "test2" "test3"
                echo "----"
                echo "./hello "
                gcc  -Wall -Wextra -Werror ../ex0${i}/ft*.c -o hello && ./hello
		echo "----"
		echo "./a.out \"test1\" \"Test2\" \"test3\" \"Car123\" \"045\""
                gcc  -Wall -Wextra -Werror ../ex0${i}/ft*.c && 	./a.out "test1" "Test2" "test3" "Car123" "045"
                echo "----"

        else
                echo " main file does not exist"
        fi
        echo ""

