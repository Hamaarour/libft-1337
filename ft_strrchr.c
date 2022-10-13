/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:29:32 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/12 11:36:37 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	j;
	int		len;

	j = (char)c;
	len = ft_strlen(s);
	if (j == '\0')
		return (&s[len]);
	while (len)
	{
		if (s[len-1] == j)
			return (&s[len-1]);
		len--;
	}
	return (0);
}
int main ()
{
	char *c = "wwww.hicham.com";
	char *p ;

	p = strrchr(c,'i');
	printf("%s",p);
	printf("\n");
	printf("%s",p);
}
