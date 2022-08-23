/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/23 13:57:08 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex03/ft_strncat.c"

int	main(void)
{
	printf_title("ex03/ft_strncat.c");
	char		src[] = "World!";
	char		dest1[13] = "Hello ";
	char		dest2[13] = "Hello ";
	unsigned int	n1 = 3;
	size_t		n2 = 3;
	printf("src: \"%s\"\n", src);
	printf("n1: %d\n", n1);
	printf("n2: %lu\n", n2);
	printf("dest1: \"%s\"\n", dest1);
	printf("dest2: \"%s\"\n", dest2);
	printf("\n");
	ft_strncat(dest1, src, n1);
	strncat(dest2, src, n2);
	printf_testresult(strcmp(dest1, dest2) == 0);
	printf("\n");
	printf("strncat(dest2, src, n2): \"%s\"\n", dest2);
	printf("ft_strncat(dest1, src, n1): \"%s\"\n", dest1);
	return (0);
}	
