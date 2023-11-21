/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allan <allan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:12:31 by allan             #+#    #+#             */
/*   Updated: 2023/11/12 23:07:45 by allan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int    ft_toupper(int ch)
{
    if (ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
        return (ch);
    }
    return (ch);
}

/*int main()
{
    int ch = '9';

    printf("%c\n", ft_toupper(ch));
    printf("%c", toupper(ch));
    return (0);
}*/


