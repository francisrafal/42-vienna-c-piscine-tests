/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/23 15:13:47 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex03/ft_atoi.c"

int	main(void)
{
	printf_title("ex03/ft_atoi.c");
	fflush(NULL);
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;
	char	*str6;
	char	*str7;
	char	*str8;

	str1 = " ---+--+1234ab567";
	str2 = " ---+- -+1234ab567";
	str3 = " \n---+-+1234ab567";
	str4 = " ---+--+a1234ab567";
	str5 = "  0";
	str6 = "2147483647";
	str7 = "-2147483648";
	str8 = "abc1234ab567";

	printf_testresult(ft_atoi(str1) == -1234);
	printf("\"%s\": %d\n", str1, ft_atoi(str1));

	printf_testresult(ft_atoi(str2) == 0);
	printf("\"%s\": %d\n", str2, ft_atoi(str2));

	printf_testresult(ft_atoi(str3) == 1234);
	printf("\"%s\": %d\n", str3, ft_atoi(str3));

	printf_testresult(ft_atoi(str4) == 0);
	printf("\"%s\": %d\n", str4, ft_atoi(str4));

	printf_testresult(ft_atoi(str5) == 0);
	printf("\"%s\": %d\n", str5, ft_atoi(str5));

	printf_testresult(ft_atoi(str6) == 2147483647);
	printf("\"%s\": %d\n", str6, ft_atoi(str6));

	printf_testresult(ft_atoi(str7) == -2147483648);
	printf("\"%s\": %d\n", str7, ft_atoi(str7));

	printf_testresult(ft_atoi(str8) == 0);
	printf("\"%s\": %d\n", str8, ft_atoi(str8));
	printf("\n");

	return (0);
}	
