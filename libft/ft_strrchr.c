/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:07:57 by amamun            #+#    #+#             */
/*   Updated: 2025/10/28 20:01:50 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	l_ind;

	l_ind = ft_strlen(str) - 1;
	while (l_ind >= 0)
	{
		if (str[l_ind] == (char) c)
		{
			return ((char *) str + l_ind);
		}
		l_ind--;
	}
	if ((char) c == '\0')
	{
		return ((char *) str + ft_strlen(str));
	}
	return (NULL);
}
