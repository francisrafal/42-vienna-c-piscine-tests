/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testhelpers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:03:14 by frafal            #+#    #+#             */
/*   Updated: 2022/08/17 19:48:08 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"

void	printf_title(char *str)
{
	printf("\033[0;36m");
	printf("+++ %s +++", str);
	printf("\n\033[0m");
}

void	printf_testresult(int testresult)
{
	if (testresult == 0)
		printf("\033[31mFAILURE:\033[0m\t");
	if (testresult == 1)
		printf("\033[32mSUCCESS:\033[0m\t");	
	if (testresult == 2)
		printf("\033[33mPLEASE MANUALLY CHECK SUCCESS/FAILURE:\033[0m\t");	
	fflush(NULL);
}
