/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:48:02 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/12 11:36:33 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char *haystack_new = (char *)haystack;

	i = 0;
	while (haystack_new[i] != '\0' && i < len )
	{
		j = 0;
		if (haystack_new[i] == needle[j])
		{
			while (haystack_new[i + j] && needle[j] && (i+j) < len && needle[j] == haystack_new[i+j])
				j++;
			if (!needle[j])
				return (&haystack_new[i]);
		}
		i++;
	}
	return (0);
}
int main ()
{
	const char *largestring = "Foo Bar Baz";//0
	const char *smallstring = "Bar"; //0 
	char	*ptr;

	ptr = ft_strnstr(largestring, smallstring, 7);
	printf("%s",ptr);
}

