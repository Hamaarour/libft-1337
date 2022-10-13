/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:17:17 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/13 17:10:22 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*  
s:      The string from which to create the substring.
start:  The start index of the substring in the string ’s’.
len:    The maximum length of the substring.
*/
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *b;
    size_t i;
    
    i = 0;
    b = malloc(len + 1);
    if(!b)
        return (NULL);
    //strlcpy(b, &s[start], len + 1);
    while (s[start] != '\0' && i < len)
    {
        b[i] = s[start];
        start++;
        i++;
    }
    b[i] = 0;
    return (b);
}
/*int main ()
{
    char s[] = "hello i'am student in 1337 Bengurir";
    char *k = ft_substr(s,17,13);
    printf("%s",k);
}*/