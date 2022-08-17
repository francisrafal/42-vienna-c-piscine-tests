/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/17 08:37:18 by celgert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ex03/ft_recursive_power.c"

int     main(void)
{
        int     n;
        int     power;

        n = 4;
        power = 2;
        printf("4^2 = 16\n");
        printf("Your result: 4^2 = %d\n",ft_recursive_power(n,power));
        printf("\n");

        n = 3;
        power = 0;
        printf("3^0 = 1\n");
        printf("Your result: 3^0 = %d\n",ft_recursive_power(n,power));
        printf("\n");

        n = -2;
        power = 3;
        printf("(-2)^3 = -8\n");
        printf("Your result: (-2)^3 = %d\n",ft_recursive_power(n,power));
        printf("\n");

        n = 3;
        power = -1;
        printf("3^(-1), power is invalid, return 0\n");
        printf("Your result: 3^(-1) = %d\n",ft_recursive_power(n,power));
        printf("\n");

        return (0);
}
