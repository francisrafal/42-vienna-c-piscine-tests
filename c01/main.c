/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/07 19:07:23 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int	main(void)
{
/* ex00 */
	{
		printf("\n+++ex00/ft_ft.c+++\n");
		int	i;
		int	*ptr;

		ptr = &i;
		ft_ft(ptr);
		printf("%d", i);
		printf("\n");
	}

/* ex01 */
	{
		printf("\n+++ex01/ft_ultimate_ft.c+++\n");
		int	j;
		int	*ptr01;
		int	**ptr02;
		int	***ptr03;
		int	****ptr04;
		int	*****ptr05;
		int	******ptr06;
		int	*******ptr07;
		int	********ptr08;
		int	*********ptr09;

		ptr01 = &j;
		ptr02 = &ptr01;
		ptr03 = &ptr02;
		ptr04 = &ptr03;
		ptr05 = &ptr04;
		ptr06 = &ptr05;
		ptr07 = &ptr06;
		ptr08 = &ptr07;
		ptr09 = &ptr08;
		ft_ultimate_ft(ptr09);
		printf("%d", j);
		printf("\n");
	}

/* ex02 */
	{
		printf("\n+++ex02/ft_swap.c+++\n");
		int	a;
		int	b;
		int	*ptr_a;
		int	*ptr_b;
		
		a = 10;
		b = 42;
		ptr_a = &a;
		ptr_b = &b;
		printf("a: %d\n", a);
		printf("b: %d\n", b);
		ft_swap(ptr_a, ptr_b);
		printf("a after swap: %d\n", a);
		printf("b after swap: %d\n", b);
	}		

/* ex03 */
	{
		printf("\n+++ex03/ft_div_mod.c+++\n");
		int	a;
		int	b;
		int	*div;
		int	*mod;
		int	div_storage;
		int	mod_storage;

		a = 17;
		b = 5;
		div = &div_storage;
		mod = &mod_storage;

		ft_div_mod(a, b, div, mod);
		printf("a: %d\n", a);
		printf("b: %d\n", b);
		printf("div_storage: %d\n", div_storage);
		printf("mod_storage: %d\n", mod_storage);

	}

/* ex04 */
	{
		printf("\n+++ex04/ft_ultimate_div_mod.c+++\n");
		int	a;
		int	b;
		int	*ptr_a;
		int	*ptr_b;

		a = 13;
		b = 4;
		ptr_a = &a;
		ptr_b = &b;

		printf("a: %d\n", a);
		printf("b: %d\n", b);
		ft_ultimate_div_mod(ptr_a, ptr_b);
		printf("div stored in a: %d\n", a);
		printf("mod stored in b: %d\n", b);
	}
	
/* ex05 */
	{
		printf("\n+++ex05/ft_putstr.c+++\n");
		fflush(NULL);
		ft_putstr("This is a test string.");
		printf("\n");
	}	

/* ex06 */
	{
		printf("\n+++ex06/ft_strlen.c+++\n");
		int	a;
		int	b;

		a = ft_strlen("A string with 27 characters");
		b = ft_strlen("");
		printf("\"A string with 27 characters\": %d\n", a);
		printf("\"\": %d\n", b);
	}	

/* ex07 */
	{
		printf("\n+++ex07/ft_rev_int_tab.c+++\n");
		int	i;
		int	j;
		int	size;
		
		size = 11;
		int	tab[size];

		tab[0] = 0;
		tab[1] = 1;
		tab[2] = 2;
		tab[3] = 3;
		tab[4] = 4;
		tab[5] = 5;
		tab[6] = 6;
		tab[7] = 7;
		tab[8] = 8;
		tab[9] = 9;
		tab[10] = 10;
		printf("Array before Reversal: \n");
		i = 0;
		while (i < size)
		{
			printf("%d", tab[i]);
			if (i < size - 1)
				printf(", ");
			i++;
		}
		ft_rev_int_tab(tab, size);
		printf("\nArray after Reversal: \n");
		j = 0;
		while (j < size)
		{
			printf("%d", tab[j]);
			if (j < size - 1)
				printf(", ");
			j++;
		}
	}	

/* ex08 */
	{
		printf("\n+++ex08/ft_sort_int_tab.c+++\n");
	}	

		fflush(NULL);


	return (0);
}
