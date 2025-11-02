/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:36:55 by amamun            #+#    #+#             */
/*   Updated: 2025/10/28 20:56:47 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calloc initializes the allocated memory to all bits zero,
// regardless of data type.
//For integers, that means the numeric value 0.
//For floating-point, that means 0.0.
//For pointers, that means NULL.
//For chars, that means '\0'.

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	ptr = (void *) malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n * size);
	return (ptr);
}
