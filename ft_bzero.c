/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 20:41:32 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/11 10:13:08 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t  i;
    unsigned char   *j;
    
    j = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        j[i] = 0;
        i++;    
    }
    s = j;

}

/*int main ()
{
    char    s[] = "hicham";
    char    j[] = "amaarour";

    ft_bzero(j,3);
    printf("%c",j[3]);
}*/