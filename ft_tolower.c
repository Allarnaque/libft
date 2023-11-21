/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:12:31 by allan             #+#    #+#             */
/*   Updated: 2023/11/12 23:10:02 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int    ft_tolower(int ch)
{
    if (ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
        return (ch);
    }
    return (ch);
}

/*int main()
{
    int ch = 'Z';

    printf("%c\n", ft_tolower(ch));
    printf("%c", tolower(ch));
    return (0);
}*/


