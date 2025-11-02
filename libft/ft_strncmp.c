/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:09:54 by amamun            #+#    #+#             */
/*   Updated: 2025/10/28 19:51:06 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if ((unsigned char) str1[i] < (unsigned char) str2[i])
		{
			return (-1);
		}
		else if ((unsigned char) str1[i] > (unsigned char) str2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
