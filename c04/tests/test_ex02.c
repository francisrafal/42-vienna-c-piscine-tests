/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/19 10:54:04 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex02/ft_putnbr.c"

int	main(void)
{
	printf_title("ex02/ft_putnbr.c");
	fflush(NULL);
	printf_testresult(2);		
	ft_putnbr(0);
	printf("\n");

	printf_testresult(2);		
	ft_putnbr(1);
	printf("\n");

	printf_testresult(2);		
	ft_putnbr(-1);
	printf("\n");

	printf_testresult(2);		
	ft_putnbr(1234);
	printf("\n");

	printf_testresult(2);		
	ft_putnbr(-1234);
	printf("\n");

	printf_testresult(2);		
	ft_putnbr(-2147483648);
	printf("\n");

	printf_testresult(2);		
	ft_putnbr(2147483647);
	printf("\n");

	return (0);
}
