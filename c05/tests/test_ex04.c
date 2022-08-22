/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/22 13:33:11 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex04/ft_fibonacci.c"

int	main(void)
{
	printf_title("ex04/ft_fibonacci.c");
	int	n; 

	n = -4;
	printf_testresult(ft_fibonacci(-4) == -1);
	printf("\n");
	printf("Expected Result: f_(-4), index is invalid, return -1\n");
	printf("Your Result: f_(-4) = %d\n",ft_fibonacci(n));
	printf("\n");

	n = 0;
	printf_testresult(ft_fibonacci(0) == 0);
	printf("\n");
	printf("Expected Result: f_0 = 0\n");
	printf("Your Result: f_0 = %d\n",ft_fibonacci(n));
	printf("\n");

	n = 1;
	printf_testresult(ft_fibonacci(1) == 1);
	printf("\n");
	printf("Expected Result: f_1 = 1\n");
	printf("Your Result: f_1 = %d\n",ft_fibonacci(n));
	printf("\n");

	n = 4;
	printf_testresult(ft_fibonacci(4) == 3);
	printf("\n");
	printf("Expected Result: f_4 = 3 \n");
	printf("Your Result: f_4 = %d\n",ft_fibonacci(n));
	printf("\n");

	n = 7;
	printf_testresult(ft_fibonacci(7) == 13);
	printf("\n");
	printf("Expected Result: f_7 = 13 \n");
	printf("Your Result: f_7 = %d\n",ft_fibonacci(n));
	printf("\n");
	return (0);
}
