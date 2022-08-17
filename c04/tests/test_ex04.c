/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/17 19:47:30 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex04/ft_putnbr_base.c"

void	test_ex04(void);

int	main(void)
{
	test_ex04();
	return (0);
}

void	test_ex04(void)
{
	printf_title("ex04/ft_putnbr_base.c");
	fflush(NULL);
	int	nbr[] = {
		0,
		1,
		10,
		1234,
		-1234,
		2147483647,
		-2147483648
	};
	char	*base[] = {
		"0123456789",
		"01",
		"0123456789ABCDEF",
		"poneyvif",
		"",
		"1",
		"ABCD+E",
		"ABC-D",
		"ABCCD"	
	};
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		printf("Base: \"%s\"\n", base[i]);
		j = 0;
		while (j < 7)
		{ 
			printf_testresult(2);		
			printf("nbr: %d => ", nbr[j]);
			fflush(NULL);
			ft_putnbr_base(nbr[j], base[i]);
			printf("\n");
			fflush(NULL);
			j++;
		}
		printf("\n");
		i++;
	}
}	
