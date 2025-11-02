/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:12:54 by amamun            #+#    #+#             */
/*   Updated: 2025/10/29 20:24:38 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, char *src, size_t n)
{
	size_t	i;

	if (dest == NULL && n == 0)
		return (ft_strlen(src));
	i = 0;
	if (n == 0)
	{
		return (ft_strlen(src));
	}
	while (*(src + i) && i < n - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
