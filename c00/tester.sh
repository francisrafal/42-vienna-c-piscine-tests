#!/bin/bash

 
rm -f main_ex0{0..8}.c # deleting temporary files which were created at previous run

#projects=("c00","c01" "c02" "c02" "c03")

#which_to_test="c00"

echo "testing ex00..."


echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror  main_ex00.c  && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex00/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 
echo "testing ex01..."

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex01.c && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex01/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo


echo "testing ex02..."
echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex02.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex02/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo


echo "testing ex03..."
echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex03.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex03/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 

echo "testing ex04..."
echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex04.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex04/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 

echo "testing ex05..."
echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex05.c  && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex05/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 

echo "testing ex06..."
echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex06.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex06/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo


echo "testing ex07..."
echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex07.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex07/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 

echo "testing ex08..."
echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex08.c  && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex08/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "Test finished, press ENTER to continue..."
echo
 
