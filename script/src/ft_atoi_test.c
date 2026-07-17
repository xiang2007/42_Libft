/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshou-xi <wshou-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 08:01:23 by wshou-xi          #+#    #+#             */
/*   Updated: 2026/07/17 11:22:54 by wshou-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "script.h"

void print_error(const char str[], int res1, int res2, int n)
{
	printf(RED "ft_atoi error at test");
	printf(": %d\n"RESET, n);
	printf("input: %s\n", str);
	printf("Expected %d but got %d\n", res2, res1);
}

int ft_atoi_test(void)
{
	int n = 0;
	{
		int res1 = 0, res2 = 0;
		const char str[] = "42";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "-42";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "abc";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "--42";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "++42";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "+-42";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "42abc";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "-42ab";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "-42-";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "2147483647";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	{
		int res1 = 0, res2 = 0;
		const char str[] = "-2147483648";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
		{
		int res1 = 0, res2 = 0;
		const char str[] = "-2147483650";

		n++;
		res1 = ft_atoi(str);
		res2 = atoi(str);
		if (res1 != res2)
			return (print_error(str, res1, res2, n), 1);
	}
	printf(GREEN "ft_atoi all test passed!!\n" RESET);
	return (0);
}