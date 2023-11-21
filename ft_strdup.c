/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:27:00 by allan             #+#    #+#             */
/*   Updated: 2023/11/21 18:23:00 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s);

char    *ft_strdup(const char *s)
{
    size_t  arr;
    char    *scopy;

    arr = strlen(s);
    scopy = malloc(arr * sizeof(char));
    if (!scopy)
        return (NULL);
    while (*s)
        *scopy++ = *s++;
    *scopy = '\0';
    scopy = scopy - (arr * sizeof(char));

    return (scopy);
}

/*int main()
{
    char s[] = "Hello";
    printf("%s\n\n", strdup(s));
    printf("%s", ft_strdup(s));
}*/