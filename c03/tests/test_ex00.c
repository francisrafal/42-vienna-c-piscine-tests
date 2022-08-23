/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/23 14:14:07 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex00/ft_strcmp.c"

int	main(void)
{
	printf_title("ex00/ft_strcmp.c");
	char	comp_str[] = "abcdefg";
	char	less[] = "abccefg";
	char	less2[] = "abcde";
	char	equal[] = "abcdefg";
	char	greater[] = "abceefg";
	char	greater2[] = "abcdefgx";
	char	empty[] = "";
	char	different[] = "bcde";

	printf_testresult(ft_strcmp(less, comp_str) == strcmp(less, comp_str));
	printf("\n");
	printf("Expected Result: strcmp: \"%s\" < \"%s\": %d\n", less, comp_str, strcmp(less, comp_str));
	printf("Your Result: ft_strcmp: \"%s\" < \"%s\": %d\n", less, comp_str, ft_strcmp(less, comp_str));
	printf("\n");
	printf_testresult(ft_strcmp(less2, comp_str) == strcmp(less2, comp_str));
	printf("\n");
	printf("Expected Result: strcmp: \"%s\" < \"%s\": %d\n", less2, comp_str, strcmp(less2, comp_str));
	printf("Your Result: ft_strcmp: \"%s\" < \"%s\": %d\n", less2, comp_str, ft_strcmp(less2, comp_str));
	printf("\n");
	printf_testresult(ft_strcmp(equal, comp_str) == strcmp(equal, comp_str));
	printf("\n");
	printf("Expected Result: strcmp: \"%s\" = \"%s\": %d\n", equal, comp_str, strcmp(equal, comp_str));
	printf("Your Result: ft_strcmp: \"%s\" = \"%s\": %d\n", equal, comp_str, ft_strcmp(equal, comp_str));
	printf("\n");
	printf_testresult(ft_strcmp(greater, comp_str) == strcmp(greater, comp_str));
	printf("\n");
	printf("Expected Result: strcmp: \"%s\" > \"%s\": %d\n", greater, comp_str, strcmp(greater, comp_str));
	printf("Your Result: ft_strcmp: \"%s\" > \"%s\": %d\n", greater, comp_str, ft_strcmp(greater, comp_str));
	printf("\n");
	printf_testresult(ft_strcmp(greater2, comp_str) == strcmp(greater2, comp_str));
	printf("\n");
	printf("Expected Result: strcmp: \"%s\" > \"%s\": %d\n", greater2, comp_str, strcmp(greater2, comp_str));
	printf("Your Result: ft_strcmp: \"%s\" > \"%s\": %d\n", greater2, comp_str, ft_strcmp(greater2, comp_str));
	printf("\n");
	printf_testresult(ft_strcmp(empty, comp_str) == strcmp(empty, comp_str));
	printf("\n");
	printf("Expected Result: strcmp: \"%s\" < \"%s\": ", empty, comp_str);
	printf("%d\n", strcmp(empty, comp_str));
	printf("Your Result: ft_strcmp: \"%s\" < \"%s\": ", empty, comp_str);
	printf("%d\n", ft_strcmp(empty, comp_str));
	printf("\n");
	printf_testresult(ft_strcmp(different, comp_str) == strcmp(different, comp_str));
	printf("\n");
	printf("Expected Result: strcmp: \"%s\" > \"%s\": ", different, comp_str);
	printf("%d\n", strcmp(different, comp_str));
	printf("Your Result: ft_strcmp: \"%s\" > \"%s\": ", different, comp_str);
	printf("%d\n", ft_strcmp(different, comp_str));
	
	return (0);
}

