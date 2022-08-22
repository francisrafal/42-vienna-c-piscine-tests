/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/22 13:31:19 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex03/ft_recursive_power.c"

int	main(void)
{
	printf_title("ex03/ft_recursive_power.c");
    int     n;
    int     power;

    n = 4;
    power = 2;
	printf_testresult(ft_recursive_power(n, power) == 16);
    printf("\n");
    printf("Expected Result: 4^2 = 16\n");
    printf("Your Result: 4^2 = %d\n",ft_recursive_power(n,power));
    printf("\n");

    n = 3;
    power = 0;
	printf_testresult(ft_recursive_power(n, power) == 1);
    printf("\n");
    printf("Expected Result: 3^0 = 1\n");
    printf("Your Result: 3^0 = %d\n",ft_recursive_power(n,power));
    printf("\n");

    n = -2;
    power = 3;
	printf_testresult(ft_recursive_power(n, power) == -8);
    printf("\n");
    printf("Expected Result: (-2)^3 = -8\n");
    printf("Your Result: (-2)^3 = %d\n",ft_recursive_power(n,power));
    printf("\n");

    n = 3;
    power = -1;
	printf_testresult(ft_recursive_power(n, power) == 0);
    printf("\n");
    printf("Expected Result: 3^(-1), power is invalid, return 0\n");
    printf("Your Result: 3^(-1) = %d\n",ft_recursive_power(n,power));
    printf("\n");

    return (0);
}
