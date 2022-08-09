/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/09 15:47:17 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Put this file into the root folder of your repo */

#include <stdio.h>
#include <bsd/string.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"
#include "ex12/ft_print_memory.c"

void	printf_title(char *str);
void	test_ex00(void);
void	test_ex01(void);
void	test_ex02(void);
void	test_ex03(void);
void	test_ex04(void);
void	test_ex05(void);
void	test_ex06(void);
void	test_ex07(void);
void	test_ex08(void);
void	test_ex09(void);
void	test_ex10(void);
void	test_ex11(void);
void	test_ex12(void);

int	main(void)
{
/* Comment out the test(s) that you don't want to execute */
	test_ex00();
	test_ex01();
	test_ex02();
	test_ex03();
	test_ex04();
	test_ex05();
	test_ex06();
	test_ex07();
	test_ex08();
	test_ex09();
	test_ex10();
	test_ex11();
	test_ex12();
}

void	printf_title(char *str)
{
	printf("\033[0;36m\n");
	printf("+++ %s +++", str);
	printf("\n\033[0m");
}

void	test_ex00(void)
{
	printf_title("ex00/ft_strcpy.c");
	char	src[] = "This is the source string.";
	char	dest[100];

	printf("src: %s\n", src);
	ft_strcpy(dest, src);
	printf("dest: %s\n", dest);
}

void	test_ex01(void)
{
	printf_title("ex01/ft_strncpy.c");
	char	src[] = "This is the source string.";
	char	dest1[1000];
	char	dest2[1000];
	unsigned int	n;

	n = 10; 
	printf("src: %s\n", src);
	ft_strncpy(dest1, src, n);
	strncpy(dest2, src, n);
	printf("unsigned int: %d\n", n);
	printf("ft_strncpy, dest1: %s\n", dest1);
	printf("strncpy, dest2: %s\n", dest2);
	
}

void	test_ex02(void)
{
	printf_title("ex02/ft_str_is_alpha.c");
	char	only_alpha[] = "ThisStringHasOnlyAlphabeticalCharacters";
	char	others[] = "This string has other characters like 1, 2 or ?";
	char	empty[] = "";
	printf("\"%s\": %d\n", only_alpha, ft_str_is_alpha(only_alpha));
	printf("\"%s\": %d\n", others, ft_str_is_alpha(others));
	printf("\"%s\": %d\n", empty, ft_str_is_alpha(empty));
}

void	test_ex03(void)
{
	printf_title("ex03/ft_str_is_numeric.c");
	char	only_digits[] = "42";
	char	others[] = "42 Vienna";
	char	empty[] = "";
	printf("\"%s\": %d\n", only_digits, ft_str_is_numeric(only_digits));
	printf("\"%s\": %d\n", others, ft_str_is_numeric(others));
	printf("\"%s\": %d\n", empty, ft_str_is_numeric(empty));
}

void	test_ex04(void)
{
	printf_title("ex04/ft_str_is_lowercase.c");
	char	only_lowercase[] = "thisisalllowercase";
	char	others[] = "this also has other characters like spaces";
	char	empty[] = "";
	printf("\"%s\": %d\n", only_lowercase, ft_str_is_lowercase(only_lowercase));
	printf("\"%s\": %d\n", others, ft_str_is_lowercase(others));
	printf("\"%s\": %d\n", empty, ft_str_is_lowercase(empty));
}

void	test_ex05(void)
{
	printf_title("ex05/ft_str_is_uppercase.c");
	char	only_uppercase[] = "THISISALLUPPERCASE";
	char	others[] = "THIS HAS OTHER CHARACTERS LIKE SPACES";
	char	empty[] = "";
	printf("\"%s\": %d\n", only_uppercase, ft_str_is_uppercase(only_uppercase));
	printf("\"%s\": %d\n", others, ft_str_is_uppercase(others));
	printf("\"%s\": %d\n", empty, ft_str_is_uppercase(empty));
}

void	test_ex06(void)
{
	printf_title("ex06/ft_str_is_printable.c");
	char	only_printable[] = "This string has only printable characters";
	char	others[] = "This string has unprintable characters like a\nnew line";
	char	empty[] = "";
	printf("\"%s\": %d\n", only_printable, ft_str_is_printable(only_printable));
	printf("\"%s\": %d\n", others, ft_str_is_printable(others));
	printf("\"%s\": %d\n", empty, ft_str_is_printable(empty));
}

void	test_ex07(void)
{
	printf_title("ex07/ft_strupcase.c");
	char	mixedcase[] = "This string is mixedcase.";
	char	uppercase[] = "THIS STRING IS UPPERCASE.";
	char	lowercase[] = "this string is lowercase.";
	printf("Original string: \"%s\"\n", mixedcase);
	printf("String after ft_strupcase: \"%s\"\n", ft_strupcase(mixedcase));
	printf("Original string: \"%s\"\n", uppercase);
	printf("String after ft_strupcase: \"%s\"\n", ft_strupcase(uppercase));
	printf("Original string: \"%s\"\n", lowercase);
	printf("String after ft_strupcase: \"%s\"\n", ft_strupcase(lowercase));
}

void	test_ex08(void)
{
	printf_title("ex08/ft_strlowcase.c");
	char	mixedcase[] = "This string is mixedcase.";
	char	uppercase[] = "THIS STRING IS UPPERCASE.";
	char	lowercase[] = "this string is lowercase.";
	printf("Original string: \"%s\"\n", mixedcase);
	printf("String after ft_strlowcase: \"%s\"\n", ft_strlowcase(mixedcase));
	printf("Original string: \"%s\"\n", uppercase);
	printf("String after ft_strlowcase: \"%s\"\n", ft_strlowcase(uppercase));
	printf("Original string: \"%s\"\n", lowercase);
	printf("String after ft_strlowcase: \"%s\"\n", ft_strlowcase(lowercase));
}

void	test_ex09(void)
{
	printf_title("ex09/ft_strcapitalize.c");
	char teststr1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char teststr2[] = "ThIS is 1 CrazY teStstring";
	printf("Original string: \"%s\"\n", teststr1);
	printf("After ft_strcapitalize: \"%s\"\n", ft_strcapitalize(teststr1));
	printf("Original string: \"%s\"\n", teststr2);
	printf("After ft_strcapitalize: \"%s\"\n", ft_strcapitalize(teststr2));
}

void	test_ex10(void)
{
	printf_title("ex10/ft_strlcpy.c");
	char		src[] = "This is the source string.";
	char		dest1[1000];
	char		dest2[1000];
	unsigned int	size;

	size = 10; 
	printf("src: \"%s\"\n", src);
	printf("size: %u\n", size);
	printf("ft_strlcpy return value: %u\n", ft_strlcpy(dest1, src, size));
	printf("strlcpy return value: %lu\n", strlcpy(dest2, src, size));
	printf("ft_strlcpy, dest1: \"%s\"\n", dest1);
	printf("strlcpy, dest2: \"%s\"\n", dest2);
}

void	test_ex11(void)
{
	printf_title("ex11/ft_putstr_non_printable.c");
	printf("Sorry, no tests available.\n");
}

void	test_ex12(void)
{
	printf_title("ex12/ft_print_memory.c");
	printf("Sorry, no tests available.\n");
}
