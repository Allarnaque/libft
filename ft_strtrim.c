/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:10:37 by allan             #+#    #+#             */
/*   Updated: 2023/11/21 19:41:06 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set);

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  lendest;
    size_t  lenset;
    unsigned char    *str;
    unsigned char    *dest;

    str = (unsigned char *)s1;
    while (*str)
    {
        if (*str = *set)
            lenset++;
        str++;
    }
    lendest = strlen(str) - lenset;
    dest = malloc(lendest * sizeof(char));
    if(!dest)
        return (NULL);
        str = str - ((lendest + lenset) * sizeof(char));
    while (*str)
    {
        if(*str != *set)
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    return  ((char *)dest); 
}

int main()
{
    char s1[] = "Hello les Potes";
    printf("%s", ft_strtrim(s1, " "));
    return  (0);
}