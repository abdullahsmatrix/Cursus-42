/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 20:20:17 by amamun            #+#    #+#             */
/*   Updated: 2025/10/28 20:58:38 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function name ft_itoa
// Prototype: char *ft_itoa(int n);
// Parameters n: The integer to convert.
// Return value: The string representing the integer.
// NULL if the allocation fails.
// External functs: malloc
// Description: Allocates memory (using malloc(3)) and returns
// a string representing the integer received as an
// argument. Negative numbers must be handled.

//// n = -12345,,, n = 12345

static int	num_len(long n)
{
	int	count_digits;

	count_digits = 0;
	if (n <= 0)
	{
		n = n * -1;
		count_digits = 1;
	}
	while (n != 0)
	{
		n = n / 10;
		count_digits++;
	}
	return (count_digits);
}

static void	ft_int_2_char(char *str, long len, long i, long n)
{
	if (n < 0)
		n = -n;
	while (len > i)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	long	len;
	char	*str;

	num = n;
	len = num_len(num);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		ft_int_2_char(str, len, 1, num);
	}
	else if (n > 0)
	{
		ft_int_2_char(str, len, 0, num);
	}
	else
		*str = '0';
	str[len] = '\0';
	return (str);
}
