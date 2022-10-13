/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:31:03 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/12 11:36:00 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *p;
    int i = 0;;
    int full_len;
    int len = ft_strlen(s1);

    full_len = ft_strlen(s1) + ft_strlen(s2);
    p = malloc(full_len + 1);
    if (!p)
        return (NULL);
    while (s2[i])
    {
        p[len + i] = s2[i];
        i++;
    }
    //ft_memcpy (p,s2,ft_strlen(s2));
    p[full_len] = 0;

    return (p);
}
int main ()
{
    char s[] = "a";
    char j[] = "";
    
    printf("%s",ft_strjoin(s,j));
}