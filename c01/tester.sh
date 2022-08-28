#!/bin/bash

 
rm -f main_ex0{0..8}.c # deleting temporary files which were created at previous run

#projects=("c00","c01" "c02" "c02" "c03")

#which_to_test="c01"

echo "testing ex00..."

main_ex00=$(cat main.c | sed -n '/ ex00 /{:a;N;/ ex01 /!ba; s/\n/ /g; s/\s\s*/ /g;  s/.* ex00 \| ex01 .*//g;p}'  | cut -c 3- | rev | cut -c 3- | rev)

echo -en "#include <unistd.h>\n#include <stdio.h>\n#include \"ex00/ft_ft.c\"\nint	main(void)\n" >> main_ex00.c

echo   $main_ex00 >> main_ex00.c

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror  main_ex00.c  && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex00/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 
echo "testing ex01..."
main_ex01=$(cat main.c | sed -n '/ ex01 /{:a;N;/ ex02 /!ba; s/\n/ /g; s/\s\s*/ /g; s/.* ex01 \| ex02 .*//g;p}'  | cut -c 3- | rev | cut -c 3- | rev)

echo -en "#include <unistd.h>\n#include <stdio.h>\n#include \"ex01/ft_ultimate_ft.c\"\nint	main(void)\n" >> main_ex01.c
echo   $main_ex01 >> main_ex01.c

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex01.c && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex01/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo


echo "testing ex02..."
main_ex02=$(cat main.c | sed -n '/ ex02 /{:a;N;/ ex03 /!ba; s/\n/ /g; s/\s\s*/ /g; s/.* ex02 \| ex03 .*//g;p}'  | cut -c 3- | rev | cut -c 3- | rev)

echo -en "#include <unistd.h>\n#include <stdio.h>\n#include \"ex02/ft_swap.c\"\nint	main(void)\n" >> main_ex02.c
echo   $main_ex02 >> main_ex02.c

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex02.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex02/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo


echo "testing ex03..."
main_ex03=$(cat main.c | sed -n '/ ex03 /{:a;N;/ ex04 /!ba; s/\n/ /g; s/\s\s*/ /g; s/.* ex03 \| ex04 .*//g;p}'  | cut -c 3- | rev | cut -c 3- | rev)

echo -en "#include <unistd.h>\n#include <stdio.h>\n#include \"ex03/ft_div_mod.c\"\nint	main(void)\n" >> main_ex03.c
echo   $main_ex03 >> main_ex03.c

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex03.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex03/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 

echo "testing ex04..."
main_ex04=$(cat main.c | sed -n '/ ex04 /{:a;N;/ ex05 /!ba; s/\n/ /g; s/\s\s*/ /g; s/.* ex04 \| ex05 .*//g;p}'  | cut -c 3- | rev | cut -c 3- | rev)
echo -en "#include <unistd.h>\n#include <stdio.h>\n#include \"ex04/ft_ultimate_div_mod.c\"\nint	main(void)\n" >> main_ex04.c
echo   $main_ex04 >> main_ex04.c

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex04.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex04/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 

echo "testing ex05..."
main_ex05=$(cat main.c | sed -n '/ ex05 /{:a;N;/ ex06 /!ba; s/\n/ /g; s/\s\s*/ /g; s/.* ex05 \| ex06 .*//g;p}'  | cut -c 3- | rev | cut -c 3- | rev)

echo -en "#include <unistd.h>\n#include <stdio.h>\n#include \"ex05/ft_putstr.c\"\nint	main(void)\n" >> main_ex05.c
echo   $main_ex05 >> main_ex05.c

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex05.c  && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex05/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 

echo "testing ex06..."
main_ex06=$(cat main.c | sed -n '/ ex06 /{:a;N;/ ex07 /!ba; s/\n/ /g; s/\s\s*/ /g; s/.* ex06 \| ex07 .*//g;p}'  | cut -c 3- | rev | cut -c 3- | rev)

echo -en "#include <unistd.h>\n#include <stdio.h>\n#include \"ex06/ft_strlen.c\"\nint	main(void)\n" >> main_ex06.c
echo   $main_ex06 >> main_ex06.c

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex06.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex06/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo


echo "testing ex07..."
main_ex07=$(cat main.c | sed -n '/ ex07 /{:a;N;/ ex08 /!ba; s/\n/ /g; s/\s\s*/ /g; s/.* ex07 \| ex08 .*//g;p}'  | cut -c 3- | rev | cut -c 3- | rev)

echo -en "#include <unistd.h>\n#include <stdio.h>\n#include \"ex07/ft_rev_int_tab.c\"\nint	main(void)\n" >> main_ex07.c
#echo -en $main_head >> main_ex07.c
echo   $main_ex07 >> main_ex07.c

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex07.c   && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex07/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "press ENTER to continue testing next exercise..."
echo
 

echo "testing ex08..."
main_ex08=$(cat main.c | sed -n '/ ex08 /{:a;N;/ ex09 /!ba; s/\n/ /g; s/\s\s*/ /g; s/.* ex08 \| ex09 .*//g;p}'  | cut -c 3- | rev | cut -c 3- | rev)

echo -en "#include <unistd.h>\n#include <stdio.h>\n#include \"ex08/ft_sort_int_tab.c\"\nint	main(void)\n" >> main_ex08.c
echo   $main_ex08  >> main_ex08.c

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main_ex08.c  && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex08/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 

echo
read -p "Test finished, press ENTER to continue..."
echo
 
