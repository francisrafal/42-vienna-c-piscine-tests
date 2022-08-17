/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/17 08:45:48 by celgert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex04/ft_fibonacci.c"

int	main(void)
{
	int	n; 
	
	n = -4;
        printf("f_(-4), index is invalid, return -1\n");
        printf("Your result: f_(-4) = %d\n",ft_fibonacci(n));
        printf("\n");

	n = 0;
	printf("f_0 = 0\n");
        printf("Your result: f_0 = %d\n",ft_fibonacci(n));
        printf("\n");

	n = 1;
        printf("f_1 = 1\n");
        printf("Your result: f_1 = %d\n",ft_fibonacci(n));
        printf("\n");

        n = 4;
        printf("f_4 = 333 \n");
        printf("Your result: f_4 = %d\n",ft_fibonacci(n));
        printf("\n");

        n = 7;
        printf("f_7 = 13 \n");
        printf("Your result: f_7 = %d\n",ft_fibonacci(n));
        printf("\n");
        return (0);
}
