/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frafal <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:40:50 by frafal            #+#    #+#             */
/*   Updated: 2022/08/24 19:00:46 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex02/ft_ultimate_range.c"

int	arrcmp(int *arr1, int *arr2, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr1[i] != arr2[i])
			return (arr1[i] - arr2[i]);
		i++;
	}
	return (0);
}

void	printf_range(int *range, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d", range[i]);
		i++;
		if (i < len)
			printf(", ");
	}
	printf("\n");
}

int	main(void)
{
	printf_title("ex02/ft_ultimate_range.c");
	int	min[] = {1, -3, 0, 3, -10, 10};
	int max[] = {4, 1, 5, 3, 10, 3};
	int	**range_ptr;
	int *ptr;
	int	i;
	int ctrl_arr1[] = {1, 2, 3};
	int ctrl_arr2[] = {-3, -2, -1, 0};
	int	ctrl_arr3[] = {0, 1, 2, 3, 4};
	int *ctrl_arr4 = NULL;
	int	ctrl_arr5[] = {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	*ctrl_arr6 = NULL;
	int *ctrl_arr[6] = {ctrl_arr1, ctrl_arr2, ctrl_arr3, ctrl_arr4, ctrl_arr5, ctrl_arr6};
	int ctrl_ret[] = {3, 4, 5, 0, 20, 0};
	int ret;
	
	range_ptr = &ptr;
	i = 0;
	while (i < 6)
	{
		ret = ft_ultimate_range(range_ptr, min[i], max[i]);
		printf_testresult(arrcmp(*range_ptr, ctrl_arr[i], max[i] - min[i]) == 0 && ret == ctrl_ret[i]);
		printf("\n");
		printf("min = %d, max = %d\n", min[i], max[i]);
		printf("Expected Result:\n");
		printf("Range: ");
		printf_range(ctrl_arr[i], max[i] - min[i]);
		printf("Return Value: %d\n", ctrl_ret[i]); 
		printf("\n");
		printf("Your Result:\n");
		printf("Range: ");
		printf_range(*range_ptr, max[i] - min[i]);
		printf("Return Value: %d\n", ret); 
		printf("\n");
		i++;
	}

	return (0);
}
