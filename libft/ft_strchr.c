/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:15:58 by amamun            #+#    #+#             */
/*   Updated: 2025/10/28 21:00:47 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Should search for the character c.
// if c is null terminator, returns pointer to the null terminator. 
// if found returns pointer to the character. 
// if found not found return NULL. 

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char) c)
			return ((char *) str);
		str++;
	}
	if ((char) c == '\0')
	{
		return ((char *) str);
	}
	return (NULL);
}
