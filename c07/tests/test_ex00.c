/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/24 11:22:06 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex00/ft_strdup.c"

int	main(void)
{
	printf_title("ex00/ft_strdup.c");
	char	*str1 = "Hello World!";
	char	*str2 = "";
	char	*str3 = "\n";

	printf("str1 = \"%s\"\n", str1);
	printf("str2 = \"%s\"\n", str2);
	printf("str3 = \"%s\"\n", str3);
	printf("\n");
	char	*str1_dup = strdup(str1);
	char	*str1_ft_dup = ft_strdup(str1);
	printf_testresult(strcmp(str1_dup, str1_ft_dup) == 0);
	printf("\n");
	printf("Expected Result: \"%s\"\n", str1_dup);
	printf("Your Result: \"%s\"\n", str1_ft_dup);
	printf("\n");

	char	*str2_dup = strdup(str2);
	char	*str2_ft_dup = ft_strdup(str2);
	printf_testresult(strcmp(str2_dup, str2_ft_dup) == 0);
	printf("\n");
	printf("Expected Result: \"%s\"\n", str2_dup);
	printf("Your Result: \"%s\"\n", str2_ft_dup);
	printf("\n");

	char	*str3_dup = strdup(str3);
	char	*str3_ft_dup = ft_strdup(str3);
	printf_testresult(strcmp(str3_dup, str3_ft_dup) == 0);
	printf("\n");
	printf("Expected Result: \"%s\"\n", str3_dup);
	printf("Your Result: \"%s\"\n", str3_ft_dup);
	printf("\n");
	return (0);
}
