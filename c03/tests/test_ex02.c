/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/23 13:55:03 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex02/ft_strcat.c"

int	main(void)
{
	printf_title("ex02/ft_strcat.c");
	char	src[] = "World!";
	char	dest1[13] = "Hello ";
	char	dest2[13] = "Hello ";
	printf("src: \"%s\"\n", src);
	printf("dest1: \"%s\"\n", dest1);
	printf("dest2: \"%s\"\n", dest2);
	ft_strcat(dest1, src);
	printf("\n");
	strcat(dest2, src);
	printf_testresult(strcmp(dest1, dest2) == 0);
	printf("\n");
	printf("Expected Result: strcat(dest2, src): \"%s\"\n", dest2);
	printf("Your Result: ft_strcat(dest1, src): \"%s\"\n", dest1);
	printf("\n");

	return (0);
}
