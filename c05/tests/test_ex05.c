/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/22 17:15:52 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex05/ft_sqrt.c"

int	main(void)
{
	printf_title("ex05/ft_sqrt.c");
	int	n; 

	n = -4;
	printf_testresult(ft_sqrt(-4) == 0);
	printf("\n");
	printf("Expected Result: sqrt(-4) would be a complex number, not allowed, return 0\n");
	printf("Your Result: sqrt(-4) = %d\n",ft_sqrt(n));
	printf("\n");

	n = 3600;
	printf_testresult(ft_sqrt(3600) == 60);
	printf("\n");
	printf("Expected Result: sqrt(3600) = 60\n");
	printf("Your Result: sqrt(3600) = %d\n",ft_sqrt(n));
	printf("\n");

	n = 49;
	printf_testresult(ft_sqrt(49) == 7);
	printf("\n");
	printf("Expected Result: sqrt(49) = 7\n");
	printf("Your Result: sqrt(49) = %d\n",ft_sqrt(n));
	printf("\n");

	n = 1;
	printf_testresult(ft_sqrt(1) == 1);
	printf("\n");
	printf("Expected Result: sqrt(1) = 1\n");
	printf("Your Result: sqrt(1) = %d\n",ft_sqrt(n));
	printf("\n");

	n = 13;
	printf_testresult(ft_sqrt(13) == 0);
	printf("\n");
	printf("Expected Result: sqrt(13) is irrational, return 0\n");
	printf("Your result: sqrt(13) = %d\n",ft_sqrt(n));
	printf("\n");

	n = 2147483647;
	printf_testresult(ft_sqrt(2147483647) == 0);
	printf("\n");
	printf("Expected Result: sqrt(2147483647) is irrational, return 0\n");
	printf("Your result: sqrt(2147483647) = %d\n",ft_sqrt(n));
	printf("\n");

	n = 2147395600;
	printf_testresult(ft_sqrt(2147395600) == 46340);
	printf("\n");
	printf("Expected Result: sqrt(2147395600) = 46340\n");
	printf("Your result: sqrt(2147395600) = %d\n",ft_sqrt(n));
	printf("\n");

	return (0);
}
