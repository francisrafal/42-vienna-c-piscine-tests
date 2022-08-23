/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celgert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 07:26:21 by celgert           #+#    #+#             */
/*   Updated: 2022/08/23 17:48:44 by frafal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testhelpers.h"
#include "../ex06/ft_is_prime.c"

int	main(void)
{
	printf_title("ex06/ft_is_prime.c");
	int	n; 

	n = -4;
	printf_testresult(ft_is_prime(-4) == 0);
	printf("\n");
	printf("-4 is not prime, return 0\n");
	printf("Is -4 prime ?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 0;
	printf_testresult(ft_is_prime(0) == 0);
	printf("\n");
	printf("Expected Result: 0 is not prime, return 0\n");
	printf("Your result: Is 0 prime?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 1;
	printf_testresult(ft_is_prime(1) == 0);
	printf("\n");
	printf("Expected Result: 1 is not prime, return 0\n");
	printf("Your Result: Is 1 prime?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 2;
	printf_testresult(ft_is_prime(2) == 1);
	printf("\n");
	printf("Expected Result: 2 is prime, return 1\n");
	printf("Your Result: Is 2 prime?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 3;
	printf_testresult(ft_is_prime(3) == 1);
	printf("\n");
	printf("Expected Result: 3 is prime, return 1\n");
	printf("Your Result: Is 3 prime?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 67;
	printf_testresult(ft_is_prime(67) == 1);
	printf("\n");
	printf("Expected Result: 67 is prime, return 1\n");
	printf("Your Result: Is 67 prime?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 77;
	printf_testresult(ft_is_prime(77) == 0);
	printf("\n");
	printf("Expected Result: 77 is not prime, return 0\n");
	printf("Your Result: Is 77 prime?  %d\n", ft_is_prime(n));
	printf("\n");

	n = 289;
	printf_testresult(ft_is_prime(289) == 0);
	printf("\n");
	printf("Expected Result: 289 is not prime, return 0\n");
	printf("Your Result: Is 289 prime?  %d\n", ft_is_prime(n));
	printf("\n");

	n = 361;
	printf_testresult(ft_is_prime(361) == 0);
	printf("\n");
	printf("Expected Result: 361 is not prime, return 0\n");
	printf("Your Result: Is 361 prime?  %d\n", ft_is_prime(n));
	printf("\n");

	n = 529;
	printf_testresult(ft_is_prime(529) == 0);
	printf("\n");
	printf("Expected Result: 529 is not prime, return 0\n");
	printf("Your Result: Is 529 prime?  %d\n", ft_is_prime(n));
	printf("\n");

	n = 841;
	printf_testresult(ft_is_prime(841) == 0);
	printf("\n");
	printf("Expected Result: 841 is not prime, return 0\n");
	printf("Your Result: Is 841 prime?  %d\n", ft_is_prime(n));
	printf("\n");

	n = 961;
	printf_testresult(ft_is_prime(961) == 0);
	printf("\n");
	printf("Expected Result: 961 is not prime, return 0\n");
	printf("Your Result: Is 961 prime?  %d\n", ft_is_prime(n));
	printf("\n");

	n = 6899;
	printf_testresult(ft_is_prime(6899) == 1);
	printf("\n");
	printf("Expected Result: 6899 is prime, return 1\n");
	printf("Your Result: Is 6899 prime?  %d\n", ft_is_prime(n));
	printf("\n");

	n = 535;
	printf_testresult(ft_is_prime(535) == 0);
	printf("\n");
	printf("Expected Result: 535 is not prime, return 0\n");
	printf("Your Result: Is 535 prime?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 50273;
	printf_testresult(ft_is_prime(50273) == 1);
	printf("\n");
	printf("Expected Result: 50273 is prime, return 1\n");
	printf("Your Result: Is 50273 prime?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 286742;
	printf_testresult(ft_is_prime(286742) == 0);
	printf("\n");
	printf("Expected Result: 286742 is not prime, return 0\n");
	printf("Your Result: Is 286742 prime?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 406507;
	printf_testresult(ft_is_prime(406507) == 1);
	printf("\n");
	printf("Expected Result: 406507 is prime, return 1\n");
	printf("Your Result: Is 406507 prime?  %d\n",ft_is_prime(n));
	printf("\n");

	n = 2147483647;
	printf_testresult(ft_is_prime(2147483647) == 1);
	printf("\n");
	printf("Expected Result: 2147483647 is prime, return 1\n");
	printf("Your Result: Is 2147483647 prime?  %d\n", ft_is_prime(n));
	printf("\n");

	return (0);
}
