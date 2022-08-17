/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/17 09:00:04 by celgert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../ex06/ft_is_prime.c"

int	main(void)
{
	int	n; 

	n = -4;
	printf(" -4 is not prime, return 0\n");
        printf(" Is -4 prime ?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 0;
	printf(" 0 is not prime, return 0\n");
        printf(" Is 0 prime ?  %d\n",ft_is_prime(n));
        printf("\n");

        n = 1;
        printf(" 1 is not prime, return 0\n");
        printf(" Is 1 prime ?  %d\n",ft_is_prime(n));
        printf("\n");

	n = 67;
	printf(" 67 is  prime, return 1\n");
        printf(" Is 67 prime ?  %d\n",ft_is_prime(n));
        printf("\n");

	n = 535;
	printf(" 535 is not prime, return 0\n");
        printf(" Is 535 prime ?  %d\n",ft_is_prime(n));
        printf("\n");

        return (0);
}
