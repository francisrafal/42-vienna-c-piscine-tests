#!/bin/bash

# Put this file into the root folder of your repo

echo -e "\n+++MAIN+++" && gcc -Wall -Wextra -Werror main.c && ./a.out && echo -e "\n+++NORMINETTE+++\n" && norminette -R CheckForbiddenSourceHeader ex*/ft* && rm ./a.out && echo -e "\n+++FILES IN REPO+++\n" && git ls-files 
