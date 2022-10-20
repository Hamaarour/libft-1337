/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:13:57 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/17 17:55:28 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *)malloc(ft_strlen((char *)s1) + 1);
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*int main ()
{
    char *st = "hicham";
    char *mine = strdup(st);
    char *theire = ft_strdup(st);
    printf("%s\n%s\n",mine,theire);
    printf("%zu\n%zu",ft_strlen(mine),ft_strlen(theire));

}*/
