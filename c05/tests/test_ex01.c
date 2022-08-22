/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/22 13:29:19 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex01/ft_recursive_factorial.c"

int	main(void)
{
	printf_title("ex01/ft_recursive_factorial.c");
	int n;

	n = 0;
	printf_testresult(ft_recursive_factorial(n) == 1);
	printf("\n");
	printf("Expected Result: 0! = 1\n");
	printf("Your Result: 0! = %d\n", ft_recursive_factorial(n));
	printf("\n");

	n = 1;
	printf_testresult(ft_recursive_factorial(n) == 1);
	printf("\n");
	printf("Expected Result: 1! = 1\n");
	printf("Your Result: 1! = %d\n", ft_recursive_factorial(n));
	printf("\n");

	n = 4;
	printf_testresult(ft_recursive_factorial(n) == 24);
	printf("\n");
	printf("Expected Result: 4! = 24\n");
	printf("Your Result: 4! = %d\n", ft_recursive_factorial(n));
	printf("\n");

	n = -3;
	printf_testresult(ft_recursive_factorial(n) == 0);
	printf("\n");
	printf("Expected Result: (-3)!: argument is not valid, return 0 \n");
	printf("Your Result: (-3)! = %d\n", ft_recursive_factorial(n));
	printf("\n");

	return (0);
}

