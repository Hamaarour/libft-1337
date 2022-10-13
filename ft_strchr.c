/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:43:02 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/12 11:35:47 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int j)
{
	int		i;
	char	c;
	int		len;

	i = 0;
	c = (char)j;
	len = ft_strlen(str);
	if (j == '\0')
		return (&str[len]);
	while (i < len)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
int main ()
{
	char *s= "hicham";
	char *p;

	p = ft_strchr(s,'i');
	printf("%c ",*(p+1));
	printf("\n");
	printf("%c",*s);

	//Standard C Library Functions
	
	/*char *k="hicham";
	char *t;

	t = strchr(k,'a');
	printf("\n%p",&k[4]);
	printf("\n");
	printf("%p",&t[0]);*/
}
