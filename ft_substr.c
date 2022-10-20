/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:17:17 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/20 14:22:18 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
s:      The string from which to create the substring.
start:  The start index of the substring in the string ’s’.
len:    The maximum length of the substring.
*/
// line 31 --> just len that can be copied from s
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*b;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	b = malloc((len + 1));
	if (!b)
		return (NULL);
	while (s[start] != '\0' && i < len && start < ft_strlen(s))
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
