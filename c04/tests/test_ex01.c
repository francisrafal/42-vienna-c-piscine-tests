/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/17 19:44:15 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex01/ft_putstr.c"

void	test_ex01(void);

int	main(void)
{
	test_ex01();
	return (0);
}

void	test_ex01(void)
{
	printf_title("ex01/ft_putstr.c");
	fflush(NULL);
	printf_testresult(2);		
	ft_putstr("This is a test string.");
	printf("\n");
}	

