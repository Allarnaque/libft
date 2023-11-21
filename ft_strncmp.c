/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:59:38 by allan             #+#    #+#             */
/*   Updated: 2023/11/14 03:06:46 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int    i;

    i = 0;
    if (n == 0)
        return (0);
        
    
    while(s1[i] && s1[i] == s2[i] && i < n - 1)
            i++;
    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*int main()
{
    const char s1[] = "Hello";
    const char s2[] = "Hella";
    size_t n = 5;
    printf("%d", ft_strncmp(s1, s2, n));
    return (0);
}*/