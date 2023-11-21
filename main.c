/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: splattje <splattje@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/14 13:58:06 by splattje      #+#    #+#                 */
/*   Updated: 2023/11/16 08:51:46 by splattje      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int	number;

	number = ft_printf(" %c %c %c \n", '0', 0, '1');
	printf("test 1.1: %d\n", number);
	number = printf(" %c %c %c \n", '0', 0, '1');
	printf("test 1.2: %d\n", number);
	number = ft_printf(" %d \n", INT_MAX);
	printf("test 2.1: %d\n", number);
	number = printf(" %d \n", INT_MAX);
	printf("test 2.2: %d\n", number);
	number = ft_printf(" %d \n", 0);
	printf("test 3.1: %d\n", number);
	number = printf(" %d \n", 0);
	printf("test 3.2: %d\n", number);
	number = ft_printf(" %d \n", INT_MIN);
	printf("test 4.1: %d\n", number);
	number = printf(" %d \n", INT_MIN);
	printf("test 4.2: %d\n", number);
	number = ft_printf(" %i \n", INT_MAX);
	printf("test 5.1: %d\n", number);
	number = printf(" %i \n", INT_MAX);
	printf("test 5.2: %d\n", number);
	number = ft_printf(" %i \n", 0);
	printf("test 6.1; %d\n", number);
	number = printf(" %i \n", 0);
	printf("test 6.2: %d\n", number);
	number = ft_printf(" %i \n", INT_MIN);
	printf("test 7.1: %d\n", number);
	number = printf(" %i \n", INT_MIN);
	printf("test 7.2: %d\n", number);
	number = ft_printf(" %p %p %p \n", ULONG_MAX, -ULONG_MAX, 0);
	printf("test 8.1: %d\n", number);
	number = printf(" %p %p %p \n", ULONG_MAX, -ULONG_MAX, 0);
	printf("test 8.2: %d\n", number);
	number = ft_printf(" %%   %%   %% \n");
	printf("test 9.1: %d\n", number);
	number = printf(" %%   %%   %% \n");
	printf("test 9.2: %d\n", number);
	number = ft_printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("test 10.1: %d\n", number);
	number = printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("test 10.2: %d\n", number);
	number = ft_printf(" %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("test 11.1: %d\n", number);
	number = printf(" %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("test 11.2: %d\n", number);
	number = ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("test 12.1: %d\n", number);
	number = printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("test 12.2: %d\n", number);
	number = ft_printf("The NULL macro represents the %p address\n", ((void*)0));
	printf("test 13.1: %d\n", number);
	number = printf("The NULL macro represents the %p address\n", ((void*)0));
	printf("test 13.2: %d\n", number);
	number = ft_printf("%%c%%s%%p%%d%%i%%u%%x%%X%%\n");
	printf("test 14.1: %d\n", number);
	number = printf("%%c%%s%%p%%d%%i%%u%%x%%X%%\n");
	printf("test 14.2: %d\n", number);
	return (0);
}
