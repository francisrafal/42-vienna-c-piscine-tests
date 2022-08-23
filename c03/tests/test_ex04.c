/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/23 14:20:29 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex04/ft_strstr.c"

int	main(void)
{
	printf_title("ex04/ft_strstr.c");
	char	needle[] = "needle";
	char	empty_needle[] = "";
	char	haystack1[] = "Where is the needle in the haystack?";
	char	haystack2[] = "This is a haystack without metal.";
	char	haystack3[] = "This is a haystack with an incomplete needl.";
	char	haystack4[] = "The needle is here.";
	printf("needle: \"%s\"\n", needle);
	printf("empty_needle: \"%s\"\n", empty_needle);
	printf("haystack1: \"%s\"\n", haystack1);
	printf("haystack2: \"%s\"\n", haystack2);
	printf("haystack3: \"%s\"\n", haystack3);
	printf("haystack4: \"%s\"\n", haystack4);
	printf("\n");

	printf_testresult(strcmp(ft_strstr(haystack1, needle), strstr(haystack1, needle)) == 0);
	printf("\n");
	printf("Expected Result: strstr(haystack1, needle): \"%s\"\n", strstr(haystack1, needle));
	printf("Your Result: ft_strstr(haystack1, needle): \"%s\"\n", ft_strstr(haystack1, needle));
	printf("\n");

	printf_testresult(ft_strstr(haystack2, needle) == 0);
	printf("\n");
	printf("Expected Result: strstr(haystack2, needle): \"%s\"\n", strstr(haystack2, needle));
	printf("Your Result: ft_strstr(haystack2, needle): \"%s\"\n", ft_strstr(haystack2, needle));
	printf("\n");

	printf_testresult(ft_strstr(haystack3, needle) == 0);
	printf("\n");
	printf("Expected Result: strstr(haystack3, needle): \"%s\"\n", strstr(haystack3, needle));
	printf("Your Result: ft_strstr(haystack3, needle): \"%s\"\n", ft_strstr(haystack3, needle));
	printf("\n");

	printf_testresult(strcmp(ft_strstr(haystack4, needle), strstr(haystack4, needle)) == 0);
	printf("\n");
	printf("Expected Result: strstr(haystack4, needle): \"%s\"\n", strstr(haystack4, needle));
	printf("Your Result: ft_strstr(haystack4, needle): \"%s\"\n", ft_strstr(haystack4, needle));
	printf("\n");
	
	printf_testresult(strcmp(ft_strstr(haystack4, empty_needle), strstr(haystack4, empty_needle)) == 0);
	printf("\n");
	printf("Expected Result: strstr(haystack4, empty_needle): \"%s\"\n", strstr(haystack4, empty_needle));
	printf("Your Result: ft_strstr(haystack4, empty_needle): \"%s\"\n", ft_strstr(haystack4, empty_needle));
	printf("\n");
	return (0);
}	
