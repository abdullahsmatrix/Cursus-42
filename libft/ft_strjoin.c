/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 04:42:33 by amamun            #+#    #+#             */
/*   Updated: 2025/10/28 21:01:27 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*s1_s2_cat;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	i = 0;
	s1_s2_cat = (char *) malloc((s1_len + s2_len + 1) * sizeof(char));
	if (s1_s2_cat == NULL)
		return (NULL);
	while (*s1)
	{
		s1_s2_cat[i++] = *s1++;
	}
	while (*s2)
	{
		s1_s2_cat[i++] = *s2++;
	}
	s1_s2_cat[i] = '\0';
	return (s1_s2_cat);
}
