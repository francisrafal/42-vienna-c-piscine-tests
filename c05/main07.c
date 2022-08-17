/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/17 09:04:37 by celgert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex07/ft_find_next_prime.c"

int	main(void)
{
	int	n; 

	n = -4;
	printf("next prime number greater or equal to -4 is 2\n");
        printf("Your result:  %d\n",ft_find_next_prime(n));
        printf("\n");


	n = 67;
	printf("next prime number greater or equal to 67 is 67\n");
        printf("Your result:  %d\n",ft_find_next_prime(n));
        printf("\n");

	n = 535;
	printf("next prime number greater or equal to 535 is 541\n");
        printf("Your result:  %d\n",ft_find_next_prime(n));
        printf("\n");

	n = 927;
        printf(" next prime number greater or equal to 927 is 929\n");
        printf("Your result:  %d\n",ft_find_next_prime(n));
        printf("\n");

        return (0);
}
