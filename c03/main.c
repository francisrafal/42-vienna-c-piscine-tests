/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/12 10:36:12 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Put this file into the root folder of your repo */

/* Comment out the test(s) that you don't want to execute */
#include <stdio.h>
#include <bsd/string.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

void	printf_title(char *str);
void	test_ex00(void);
void	test_ex01(void);
void	test_ex02(void);
void	test_ex03(void);
void	test_ex04(void);
void	test_ex05(void);

int	main(void)
{
/* Comment out the test(s) that you don't want to execute */
	test_ex00();
	test_ex01();
	test_ex02();
	test_ex03();
	test_ex04();
	test_ex05();
}

void	printf_title(char *str)
{
	printf("\033[0;36m\n");
	printf("+++ %s +++", str);
	printf("\n\033[0m");
}

/* Comment out the test(s) that you don't want to execute */
void	test_ex00(void)
{
	printf_title("ex00/ft_strcmp.c");
	char	comp_str[] = "abcdefg";
	char	less[] = "abccefg";
	char	less2[] = "abcde";
	char	equal[] = "abcdefg";
	char	greater[] = "abceefg";
	char	greater2[] = "abcdefgx";

	printf("ft_strcmp: \"%s\" < \"%s\": %d\n", less, comp_str, ft_strcmp(less, comp_str));
	printf("strcmp: \"%s\" < \"%s\": %d\n", less, comp_str, strcmp(less, comp_str));
	printf("\n");
	printf("ft_strcmp: \"%s\" < \"%s\": %d\n", less2, comp_str, ft_strcmp(less2, comp_str));
	printf("strcmp: \"%s\" < \"%s\": %d\n", less2, comp_str, strcmp(less2, comp_str));
	printf("\n");
	printf("ft_strcmp: \"%s\" = \"%s\": %d\n", equal, comp_str, ft_strcmp(equal, comp_str));
	printf("strcmp: \"%s\" = \"%s\": %d\n", equal, comp_str, strcmp(equal, comp_str));
	printf("\n");
	printf("ft_strcmp: \"%s\" > \"%s\": %d\n", greater, comp_str, ft_strcmp(greater, comp_str));
	printf("strcmp: \"%s\" > \"%s\": %d\n", greater, comp_str, strcmp(greater, comp_str));
	printf("\n");
	printf("ft_strcmp: \"%s\" > \"%s\": %d\n", greater2, comp_str, ft_strcmp(greater2, comp_str));
	printf("strcmp: \"%s\" > \"%s\": %d\n", greater2, comp_str, strcmp(greater2, comp_str));
}

void	test_ex01(void)
{
	printf_title("ex01/ft_strncmp.c");
	char	comp_str[] = "abcdefg";
	char	less[] = "abccefg";
	char	less2[] = "abcde";
	char	equal[] = "abcdefg";
	char	greater[] = "abceefg";
	char	greater2[] = "abcdefgx";
	char	empty[] = "";
	char	different[] = "bcde";
	size_t	n = 0;
	
	while (n < 11)
	{
		printf("\nn = %lu\n\n", n);
		printf("ft_strncmp: \"%s\" < \"%s\": ", less, comp_str);
		printf("%d\n", ft_strncmp(less, comp_str, n));
		printf("strncmp: \"%s\" < \"%s\": ", less, comp_str);
		printf("%d\n", strncmp(less, comp_str, n));
		printf("\n");
		printf("ft_strncmp: \"%s\" < \"%s\": ", less2, comp_str);
		printf("%d\n", ft_strncmp(less2, comp_str, n));
		printf("strncmp: \"%s\" < \"%s\": ", less2, comp_str);
		printf("%d\n", strncmp(less2, comp_str, n));
		printf("\n");
		printf("ft_strncmp: \"%s\" = \"%s\": ", equal, comp_str);
		printf("%d\n", ft_strncmp(equal, comp_str, n));
		printf("strncmp: \"%s\" = \"%s\": ", equal, comp_str);
		printf("%d\n", strncmp(equal, comp_str, n));
		printf("\n");
		printf("ft_strncmp: \"%s\" > \"%s\": ", greater, comp_str);
		printf("%d\n", ft_strncmp(greater, comp_str, n));
		printf("strncmp: \"%s\" > \"%s\": ", greater, comp_str);
		printf("%d\n", strncmp(greater, comp_str, n));
		printf("\n");
		printf("ft_strncmp: \"%s\" > \"%s\": ", greater2, comp_str);
		printf("%d\n", ft_strncmp(greater2, comp_str, n));
		printf("strncmp: \"%s\" > \"%s\": ", greater2, comp_str);
		printf("%d\n", strncmp(greater2, comp_str, n));
		printf("\n");
		printf("ft_strncmp: \"%s\" > \"%s\": ", empty, comp_str);
		printf("%d\n", ft_strncmp(empty, comp_str, n));
		printf("strncmp: \"%s\" > \"%s\": ", empty, comp_str);
		printf("%d\n", strncmp(empty, comp_str, n));
		printf("\n");
		printf("ft_strncmp: \"%s\" > \"%s\": ", different, comp_str);
		printf("%d\n", ft_strncmp(different, comp_str, n));
		printf("strncmp: \"%s\" > \"%s\": ", different, comp_str);
		printf("%d\n", strncmp(different, comp_str, n));
		n += 2;
	}
}

void	test_ex02(void)
{
	printf_title("ex02/ft_strcat.c");
	char	src[] = "World!";
	char	dest1[13] = "Hello ";
	char	dest2[13] = "Hello ";
	printf("src: \"%s\"\n", src);
	printf("dest1: \"%s\"\n", dest1);
	printf("dest2: \"%s\"\n", dest2);
	printf("ft_strcat(dest1, src): \"%s\"\n", ft_strcat(dest1, src));
	printf("strcat(dest2, src): \"%s\"\n", strcat(dest2, src));
}

void	test_ex03(void)
{
	printf_title("ex03/ft_strncat.c");
	char		src[] = "World!";
	char		dest1[13] = "Hello ";
	char		dest2[13] = "Hello ";
	unsigned int	n1 = 3;
	size_t		n2 = 3;
	printf("src: \"%s\"\n", src);
	printf("n1: %d\n", n1);
	printf("n2: %lu\n", n2);
	printf("dest1: \"%s\"\n", dest1);
	printf("dest2: \"%s\"\n", dest2);
	printf("ft_strncat(dest1, src, n1): \"%s\"\n", ft_strncat(dest1, src, n1));
	printf("strncat(dest2, src, n2): \"%s\"\n", strncat(dest2, src, n2));
}

void	test_ex04(void)
{
	printf_title("ex04/ft_strstr.c");
	char	needle[] = "needle";
	char	haystack1[] = "Where is the needle in the haystack?";
	char	haystack2[] = "This is a haystack without metal.";
	char	haystack3[] = "This is a haystack with an incomplete needl.";
	char	haystack4[] = "The needle is here.";
	printf("needle: \"%s\"\n", needle);
	printf("haystack1: \"%s\"\n", haystack1);
	printf("haystack2: \"%s\"\n", haystack2);
	printf("haystack3: \"%s\"\n", haystack3);
	printf("haystack4: \"%s\"\n", haystack4);
	printf("ft_strstr(haystack1, needle): \"%s\"\n", ft_strstr(haystack1, needle));
	printf("strstr(haystack1, needle): \"%s\"\n", strstr(haystack1, needle));
	printf("ft_strstr(haystack2, needle): \"%s\"\n", ft_strstr(haystack2, needle));
	printf("strstr(haystack2, needle): \"%s\"\n", strstr(haystack2, needle));
	printf("ft_strstr(haystack3, needle): \"%s\"\n", ft_strstr(haystack3, needle));
	printf("strstr(haystack3, needle): \"%s\"\n", strstr(haystack3, needle));
	printf("ft_strstr(haystack4, needle): \"%s\"\n", ft_strstr(haystack4, needle));
	printf("strstr(haystack4, needle): \"%s\"\n", strstr(haystack4, needle));
}

void	test_ex05(void)
{
	printf_title("ex05/ft_strlcat.c");
	char		src[] = "World!";
	unsigned int	size = 10;
	char		dest1[10] = "Hello ";
	char		dest2[10] = "Hello ";
	unsigned int	ft_strlcat_rv;
	unsigned int	strlcat_rv;
	
	printf("src: \"%s\"\n", src);
	printf("dest1: \"%s\"\n", dest1);
	printf("dest2: \"%s\"\n", dest2);
	printf("size: %u\n", size);
	printf("\n");

	ft_strlcat_rv = ft_strlcat(dest1, src, size);
	printf("ft_strlcat return value: %u\n", ft_strlcat_rv);
	if (ft_strlcat_rv >= sizeof(dest1))
		printf("ft_strlcat: Too long! %lu character/s truncated\n", ft_strlcat_rv - sizeof(dest1) + 1); 
	printf("ft_strlcat, dest1: \"%s\"\n", dest1);
	printf("\n");
	
	strlcat_rv = strlcat(dest2, src, size);
	printf("strlcat return value: %u\n", strlcat_rv);
	if (strlcat_rv >= sizeof(dest2))
		printf("strlcat: Too long! %lu character/s truncated\n", strlcat_rv - sizeof(dest2) + 1); 
	printf("strlcat, dest2: \"%s\"\n", dest2);
}


