/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/17 08:51:50 by celgert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex05/ft_sqrt.c"

int	main(void)
{
	int	n; 

	n = -4;
	printf("sqrt(-4) would be a complex number, not allowed, return  0\n");
        printf("Your result: sqrt(-4) = %d\n",ft_sqrt(n));
        printf("\n");

	n = 3600;
        printf("sqrt(3600) = 60\n");
        printf("Your result: sqrt(3600) = %d\n",ft_sqrt(n));
        printf("\n");

        n = 1;
        printf("sqrt(1) = 1\n");
        printf("Your result: sqrt(1) = %d\n",ft_sqrt(n));
        printf("\n");

        n = 13;
	printf("sqrt(13) is irrational, return 0\n");
        printf("Your result: sqrt(13) = %d\n",ft_sqrt(n));
        printf("\n");

        return (0);
}
