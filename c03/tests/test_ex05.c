/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 10:52:32 by frafal            #+#    #+#             */
/*   Updated: 2022/08/23 15:10:08 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex05/ft_strlcat.c"

int	main(void)
{
	printf_title("ex05/ft_strlcat.c");
	char		src[] = "World";
	char		src2[] = "";
	unsigned int	size = 10;
	char		dest1[10] = "Hello ";
	char		dest2[10] = "Hello ";
	char		dest3[10] = "Hello ";
	char		dest4[10] = "Hello ";
	unsigned int	ft_strlcat_rv;
	unsigned int	strlcat_rv;
	
	printf("src: \"%s\"\n", src);
	printf("dest1: \"%s\"\n", dest1);
	printf("dest2: \"%s\"\n", dest2);
	printf("size: %u\n", size);
	printf("\n");

	strlcat_rv = strlcat(dest2, src, size);
	ft_strlcat_rv = ft_strlcat(dest1, src, size);
	printf_testresult(strlcat_rv == ft_strlcat_rv);
	printf("\n");
	printf("Expected Result: strlcat return value: %u\n", strlcat_rv);
	printf("Your Result: ft_strlcat return value: %u\n", ft_strlcat_rv);
	printf("\n");

	printf_testresult(strlcat_rv == ft_strlcat_rv);
	printf("\n");
	printf("Expected Result: "); 
	if (strlcat_rv >= sizeof(dest2))
		printf("strlcat: Too long! %lu character/s truncated", strlcat_rv - sizeof(dest2) + 1); 
	printf("\n");
	printf("Your Result: "); 
	if (ft_strlcat_rv >= sizeof(dest1))
		printf("ft_strlcat: Too long! %lu character/s truncated", ft_strlcat_rv - sizeof(dest1) + 1); 
	printf("\n");
	printf("\n");

	printf_testresult(strcmp(dest2, dest1) == 0);
	printf("\n");
	printf("strlcat, dest2: \"%s\"\n", dest2);
	printf("ft_strlcat, dest1: \"%s\"\n", dest1);
	printf("\n");
	
	printf("src2: \"%s\"\n", src2);
	printf("dest3: \"%s\"\n", dest3);
	printf("dest4: \"%s\"\n", dest4);
	printf("size: %u\n", size);
	printf("\n");

	strlcat_rv = strlcat(dest3, src2, size);
	ft_strlcat_rv = ft_strlcat(dest4, src2, size);
	printf_testresult(strlcat_rv == ft_strlcat_rv);
	printf("\n");
	printf("Expected Result: strlcat return value: %u\n", strlcat_rv);
	printf("Your Result: ft_strlcat return value: %u\n", ft_strlcat_rv);
	printf("\n");

	printf_testresult(strlcat_rv == ft_strlcat_rv);
	printf("\n");
	printf("Expected Result: "); 
	if (strlcat_rv >= sizeof(dest3))
		printf("strlcat: Too long! %lu character/s truncated", strlcat_rv - sizeof(dest3) + 1); 
	printf("\n");
	printf("Your Result: "); 
	if (ft_strlcat_rv >= sizeof(dest4))
		printf("ft_strlcat: Too long! %lu character/s truncated", ft_strlcat_rv - sizeof(dest4) + 1); 
	printf("\n");
	printf("\n");

	printf_testresult(strcmp(dest3, dest4) == 0);
	printf("\n");
	printf("strlcat, dest2: \"%s\"\n", dest3);
	printf("ft_strlcat, dest1: \"%s\"\n", dest4);
	
	return (0);
}	
