#!/bin/bash
echo "testing ex00..."
norminette -R CheckDefine ex00/*.h
echo
read -p "press ENTER to continue testing next exercise..."
echo
echo "testing ex01..."
norminette -R CheckDefine ex01/*.h
gcc -Wall -Wextra -Werror  ex01/*.c  && ./a.out
./a.out argument1
./a.out argument1 argument2
./a.out argument1 argument2 argument3
echo
read -p "press ENTER to continue testing next exercise..."
echo
echo "testing ex02..."
norminette -R CheckDefine ex02/*.h

echo
read -p "press ENTER to continue testing next exercise..."
echo
echo "testing ex03..."
norminette -R CheckDefine ex03/*.h
gcc -Wall -Wextra -Werror  ex03/*.c  && ./a.out
echo "Correct Result should be: x: 42 y: 21"
echo
read -p "No more test available, press ENTER to exit.."
echo
