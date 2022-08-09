# 42-vienna-c-piscine-tests
Testing Tools For The 42 Vienna Piscine

# What the tests do
1. Call the functions with some test data
2. Execute norminette
3. List all the Files that git will push to your repo (so you can make sure that the test files will not be in your final repo)

Feel free to use it, feedback and modify it. If you have any questions, add one under "Issues"
If you want to add some tests, create a pull request or write me on Discord: Francis Rafal#1334

# Usage:
1. Make sure that you have already created all the exercise directories and required files for the project
2. Move main.c and test.sh to the root of your project repo
3. Comment out the tests that you don't want to execute in the main.c file in int main()
4. Execute test.sh with `bash test.sh` (or `chmod 755 test.sh` first to execute with `./test.sh`)
5. Add main.c and test.sh to .gitignore


# Known Bugs:
- c01: Only checks for c01/ex00-ex07 (didn't do ex08)
- c02: Only checks for c02/ex00-ex10 (didn't do ex11 and ex12)
- Throws an error if you declare a function twice, like ft_swap() in one file and in another. For Moulinette this shouldn't be a problem but the testing script has a problem with that. Workaround: Rename the second function, i.e. to ft_swap2()
