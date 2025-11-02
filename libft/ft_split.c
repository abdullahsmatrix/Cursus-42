/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amamun <amamun@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:07:36 by amamun            #+#    #+#             */
/*   Updated: 2025/10/24 21:41:07 by amamun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/libft.h"

int word_count(char const *str, char c)
{
    int count;

    count = 0;
    //  to be   , or not to be
    while(*str)
    {
        while(*str && *str == c)
            str++;
        if(*str && *str != c)
            count++;
        while (*str && *str !=c)
            str++;
    }
    return (count);
}

char *ft_custom_strdup(char const *str, char c)
{
    char *dup;
    size_t i;
    size_t len;

    len = 0;
    i = 0;
    char const *temp = str;
    while (*temp && *temp != c)
    {
        len++;
        temp++;
    }
    dup = (char *) malloc(sizeof(char) * (len + 1));
    if(!dup)
        return (NULL);
    while( i < len)
    {
        dup[i] = str[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

void free_split(char **arr, size_t j)
{
    while (j > 0)
    {
        free(arr[j-1]);
        j--;
    }
    free(arr);
    
}


char **ft_split(char const *s, char c)
{
    //allocating memory for the array of words with null termination of words & array of words. 
    size_t count;
    size_t j;
    size_t k;

    j = 0;
    count = word_count(s, c);
    char **arr = (char **) malloc(sizeof(char *) * (count + 1));
        if(arr == NULL)
            return (NULL);
    while (*s)
    {
        while(*s && *s == c)
            s++;
        if(*s && *s != c)
        {
            arr[j] = ft_custom_strdup(s, c);
            if (!arr[j])
            {
                free_split(arr, j);
                return NULL;
            }
            j++;
        }
        while(*s && *s != c)
        {
            s++;
        }
    
    }
    arr[count] = '\0';
    return (arr);    
}