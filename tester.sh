#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"

#DIR = "$(echo "$HOME/42-vienna-c-piscine-tests")"
current_dir=$PWD
parentdir="$(dirname "$(pwd)")"

foldername="$(basename "$PWD")" 
#echo "$DIR"
#DIR = eval "$(dirname $DIR)"
#echo $parentdir
#echo $current_dir
if [[ -f "./ex01/ft_print_alphabet.c" || "${foldername,,}" == "c00"  ]]; then 
cp $DIR/c00/main_ex*.c $current_dir/
cp $DIR/c00/tester.sh $current_dir/tester.sh
eval "bash $current_dir/tester.sh"
rm $current_dir/tester.sh
rm $current_dir/main_*.c

elif [[ -f "./ex00/ft_ft.c" || "${foldername,,}" == "c01" ]]; then 
    echo "Testing c01"
cp $DIR/c01/main.c $current_dir/main.c
cp $DIR/c01/tester.sh $current_dir/tester.sh
eval "bash $current_dir/tester.sh"
rm $current_dir/tester.sh
rm $current_dir/main.c
rm $current_dir/main_*.c
elif [[ -f "./ex01/ft_strncpy.c" || "${foldername,,}" == "c02" ]]; then 
    echo "Testing c02"
cp $DIR/c02/main.c $current_dir/main.c
cp $DIR/c02/test.sh $current_dir/test.sh
eval "bash $current_dir/test.sh"
rm $current_dir/test.sh
rm $current_dir/main.c
elif [[ -f "./ex01/ft_strncmp.c" || "${foldername,,}" == "c03" ]]; then 
    echo "Testing c03"
cp -R $DIR/c03/tests $current_dir
cd $current_dir/tests
eval "bash $current_dir/tests/test.sh"
rm -rf $current_dir/tests
elif [[ -f "./ex00/ft_strlen.c" || "${foldername,,}" == "c04" ]]; then 
    echo "Testing c04"
cp -R $DIR/c04/tests $current_dir
cd $current_dir/tests
eval "bash $current_dir/tests/test.sh"
rm -rf $current_dir/tests
elif [[ -f "./ex00/ft_iterative_factorial.c" || "${foldername,,}" == "c05" ]]; then 
    echo "Testing c05"
cp -R $DIR/c05/tests $current_dir
cd $current_dir/tests
eval "bash $current_dir/tests/test.sh"
rm -rf $current_dir/tests
elif [[ -f "./ex00/ft_print_program_name.c" || "${foldername,,}" == "c06" ]]; then 
    echo "Sorry, currently no test exists for c06"
elif [[ -f "./ex00/ft_strdup.c" || "${foldername,,}" == "c07" ]]; then 
    echo "Testing c07"
cp -R $DIR/c07/tests $current_dir
cd $current_dir/tests
eval "bash $current_dir/tests/test.sh"
rm -rf $current_dir/tests
elif [[ -f "./ex01/ft_boolean.h" || "${foldername,,}" == "c08" ]]; then 
    echo "Testing c08"
cp $DIR/c08/ex01/test_ex01.c $current_dir/ex01/test_ex01.c
cp $DIR/c08/ex03/test_ex03.c $current_dir/ex03/test_ex03.c
cp $DIR/c08/test.sh $current_dir/test.sh
eval "bash $current_dir/test.sh"
rm $current_dir/test.sh
rm $current_dir/ex01/test_ex01.c
rm $current_dir/ex03/test_ex03.c
elif [[ -f "./ex01/ft_strncmp.c" || "${foldername,,}" == "c09" ]]; then 
    echo "Sorry, currently no test exist for c09"
elif [[ -f "./ex00/libft_creator.sh" || "${foldername,,}" == "c10" ]]; then 
    echo "Sorry, currently no test exists for c10"

elif [[ -f "./ex01/ft_strncmp.c" || "${foldername,,}" == "shell00" || "${foldername,,}" == "shell_00" ]]; then 
    echo "Testing shell00"
cp $DIR/shell00/test.sh $current_dir/test.sh
eval "bash $current_dir/test.sh"
rm $current_dir/test.sh

elif [[ -f "./ex01/ft_strncmp.c" || "${foldername,,}" == "shell01" || "${foldername,,}" == "shell_01"  ]]; then 
    echo "Sorry, currently no test exists for shell01"
else 
    echo "Please run the script inside the directory where your exercise is, i.e. c01"
fi
