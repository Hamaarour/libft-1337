/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:45:56 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/13 17:10:38 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
#include<string.h>


/*
    s1 = "++hicham++"
    s2 = "++" 
*/
int is_set(char c, char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if(set[i] == c)
            return (1);
        i++;
    }
    return (0);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    char    *p;
    size_t i;
    size_t j;
    char *set_new = (char *)set;
    char *s1_new = (char *)s1;

    i = 0;
    while (s1_new[i] && is_set(s1_new[i],set_new))
        i++;
        
    j = ft_strlen(s1_new) - 1;
    while (s1_new[j] && is_set(s1_new[j],set_new))
        j--;
    p = ft_substr(s1,i,j - i + 1);  
    if(!p)
        return (NULL);
    return (p);      
}
int main ()
{
    char *j = "+--hicham+-";
    char *k = "+-+hm";
    char *x = ft_strtrim(j,k);
    printf("%s",x);
}