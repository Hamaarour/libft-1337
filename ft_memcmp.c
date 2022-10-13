/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:16:14 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/12 11:35:35 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char *s1_new = (unsigned char *)s1;
    unsigned char *s2_new = (unsigned char *)s2;
    
    i = 0;
    while (i < n)
    {
        if (s1_new[i] != s2_new[i])
            return (s1_new[i] - s2_new[i]);
        i++;
    }
    return (0);
}

int main()
{
    int s[] = {1,2,3,4,5};
    int j[] = {1,2,3,7,5};

    /*char s[] = "hicham@gmail.com";
    char j[] = "@";*/
    int k;
    k = ft_memcmp(s,j,20);    
    printf("%d", k);

}