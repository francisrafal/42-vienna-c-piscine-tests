/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/17 19:30:32 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex00/ft_strlen.c"

void	test_ex00(void);

int	main(void)
{
	test_ex00();
	return (0);
}

void	test_ex00(void)
{
	printf_title("ex00/ft_strlen.c");
	int	a;
	int	b;

	a = ft_strlen("A string with 27 characters");
	b = ft_strlen("");
	printf_testresult(a == 27);
	printf("\"A string with 27 characters\": %d\n", a);
	printf_testresult(b == 0);
	printf("\"\": %d\n", b);
}

