/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/23 13:50:08 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex01/ft_strncmp.c"

char	cmp(int x)
{
	if (x < 0)
		return ('<');
	if (x > 0)
		return ('>');
	return ('=');
}


int	main(void)
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
	int		expected;
	int		yours;
	size_t	n;

	n = 0;
	while (n < 11)
	{
		printf("\nn = %lu\n\n", n);
		expected = strncmp(less, comp_str, n);
		yours = ft_strncmp(less, comp_str, n);
		printf_testresult(expected == yours);
		printf("\n");
		printf("Expected Result: strncmp: \"%s\" %c \"%s\": %d\n", less, cmp(expected), comp_str, expected);
		printf("Your Result: ft_strncmp: \"%s\" %c \"%s\": %d\n", less, cmp(yours), comp_str, yours);
		printf("\n");

		expected = strncmp(less2, comp_str, n);
		yours = ft_strncmp(less2, comp_str, n);
		printf_testresult(expected == yours);
		printf("\n");
		printf("Expected Result: strncmp: \"%s\" %c \"%s\": %d\n", less2, cmp(expected), comp_str, expected);
		printf("Your Result: ft_strncmp: \"%s\" %c \"%s\": %d\n", less2, cmp(yours), comp_str, yours);
		printf("\n");

		expected = strncmp(equal, comp_str, n);
		yours = ft_strncmp(equal, comp_str, n);
		printf_testresult(expected == yours);
		printf("\n");
		printf("Expected Result: strncmp: \"%s\" %c \"%s\": %d\n", equal, cmp(expected), comp_str, expected);
		printf("Your Result: ft_strncmp: \"%s\" %c \"%s\": %d\n", equal, cmp(yours), comp_str, yours);
		printf("\n");

		expected = strncmp(greater, comp_str, n);
		yours = ft_strncmp(greater, comp_str, n);
		printf_testresult(expected == yours);
		printf("\n");
		printf("Expected Result: strncmp: \"%s\" %c \"%s\": %d\n", greater, cmp(expected), comp_str, expected);
		printf("Your Result: ft_strncmp: \"%s\" %c \"%s\": %d\n", greater, cmp(yours), comp_str, yours);
		printf("\n");

		expected = strncmp(greater2, comp_str, n);
		yours = ft_strncmp(greater2, comp_str, n);
		printf_testresult(expected == yours);
		printf("\n");
		printf("Expected Result: strncmp: \"%s\" %c \"%s\": %d\n", greater2, cmp(expected), comp_str, expected);
		printf("Your Result: ft_strncmp: \"%s\" %c \"%s\": %d\n", greater2, cmp(yours), comp_str, yours);
		printf("\n");

		expected = strncmp(empty, comp_str, n);
		yours = ft_strncmp(empty, comp_str, n);
		printf_testresult(expected == yours);
		printf("\n");
		printf("Expected Result: strncmp: \"%s\" %c \"%s\": %d\n", empty, cmp(expected), comp_str, expected);
		printf("Your Result: ft_strncmp: \"%s\" %c \"%s\": %d\n", empty, cmp(yours), comp_str, yours);
		printf("\n");

		expected = strncmp(different, comp_str, n);
		yours = ft_strncmp(different, comp_str, n);
		printf_testresult(expected == yours);
		printf("\n");
		printf("Expected Result: strncmp: \"%s\" %c \"%s\": %d\n", different, cmp(expected), comp_str, expected);
		printf("Your Result: ft_strncmp: \"%s\" %c \"%s\": %d\n", different, cmp(yours), comp_str, yours);
		printf("\n");
		n += 2;
	}
	return (0);
}	
