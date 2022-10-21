/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:53:42 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/20 20:41:04 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*char  toapr(unsigned int i, char str)
{
	i =  0;
	str = 'a';
	return (str);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == 0)
		return (NULL);
	while (s[i])
	{
		p[i] = (f)(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*#include <stdio.h>
int main ()
{
	char *s ="hicham";
	printf("%s",ft_strmapi(s,&toapr));
}*/
