/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:47:54 by amamun            #+#    #+#             */
/*   Updated: 2025/10/29 20:22:30 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat( char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (dest == NULL && dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	j = 0;
	if (dstsize <= dst_len)
	{
		return (dstsize + src_len);
	}
	i = dst_len;
	while (*(src + j) && i < dstsize - 1)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_len + dst_len);
}
