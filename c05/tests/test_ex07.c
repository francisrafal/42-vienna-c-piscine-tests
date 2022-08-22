/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/22 18:27:55 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex07/ft_find_next_prime.c"

int	main(void)
{
	printf_title("ex07/ft_find_next_prime.c");
	int	n; 

	n = -4;
	printf_testresult(ft_find_next_prime(-4) == 2);
	printf("\n");
	printf("Expected Result: Next prime number greater or equal to -4 is 2\n");
	printf("Your Result:  %d\n", ft_find_next_prime(n));
	printf("\n");

	n = 67;
	printf_testresult(ft_find_next_prime(67) == 67);
	printf("\n");
	printf("Expected Result: Next prime number greater or equal to 67 is 67\n");
	printf("Your Result:  %d\n", ft_find_next_prime(n));
	printf("\n");

	n = 535;
	printf_testresult(ft_find_next_prime(535) == 541);
	printf("\n");
	printf("Expected Result: Next prime number greater or equal to 535 is 541\n");
	printf("Your Result:  %d\n", ft_find_next_prime(n));
	printf("\n");

	n = 927;
	printf_testresult(ft_find_next_prime(927) == 929);
	printf("\n");
	printf("Expected Result: Next prime number greater or equal to 927 is 929\n");
	printf("Your Result:  %d\n", ft_find_next_prime(n));
	printf("\n");

	n = 50273;
	printf_testresult(ft_find_next_prime(50273) == 50273);
	printf("\n");
	printf("Expected Result: Next prime number greater or equal to 50273 is 50273\n");
	printf("Your Result:  %d\n", ft_find_next_prime(n));
	printf("\n");

	n = 286742;
	printf_testresult(ft_find_next_prime(286742) == 286751);
	printf("\n");
	printf("Expected Result: Next prime number greater or equal to 286742 is 286751\n");
	printf("Your Result:  %d\n", ft_find_next_prime(n));
	printf("\n");

	n = 406507;
	printf_testresult(ft_find_next_prime(406507) == 406507);
	printf("\n");
	printf("Expected Result: Next prime number greater or equal to 406507 is 406507\n");
	printf("Your Result:  %d\n", ft_find_next_prime(n));
	printf("\n");

	n = 2147483630;
	printf_testresult(ft_find_next_prime(2147483630) == 2147483647);
	printf("\n");
	printf("Expected Result: Next prime number greater or equal to 2147483630 is 2147483647\n");
	printf("Your Result:  %d\n", ft_find_next_prime(n));
	printf("\n");

	return (0);
}
