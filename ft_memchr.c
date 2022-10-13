/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:47:14 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/12 11:35:30 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *k = (unsigned char *)s;

    i = 0;
    while (i < n)
    {
        if(k[i] == (char)c)
            return (&k[i]);
        i++;
    }
    return (0);
}


int main () {
    const char str[] = "abc";
    printf("%p\n", &str[2]);
    const char ch = 0;
    char *ret;

    ret = ft_memchr(str, ch, 4);

    printf("String after :%c \nresult : |%p|\n", ch, --ret);

    return(0);
}
