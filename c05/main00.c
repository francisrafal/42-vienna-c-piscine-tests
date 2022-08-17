/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/17 08:05:22 by celgert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex00/ft_iterative_factorial.c"

int	main(void)
{
	int n; 

	n = 0;
	printf("0! = 1\n");
	printf("Your result: 0! = %d\n", ft_iterative_factorial(n));
        printf("\n");

	n = 1;
        printf("1! = 1\n");
        printf("Your result: 1! = %d\n", ft_iterative_factorial(n));
        printf("\n");


        n = 4;
        printf("4! = 24\n");
        printf("Your result: 4! = %d\n", ft_iterative_factorial(n));
        printf("\n");


	n = -3;
        printf("(-3)!: argument is not valid, return 0 \n");
        printf("Your result: (-3)! = %d\n", ft_iterative_factorial(n));
        printf("\n");

	return (0);

}
