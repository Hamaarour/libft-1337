/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:16:14 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/14 14:43:23 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_new;
	unsigned char	*s2_new;

	s2_new = (unsigned char *)s2;
	s1_new = (unsigned char *)s1;
	i = 0;
	while (i < n)
	{
		if (s1_new[i] != s2_new[i])
			return (s1_new[i] - s2_new[i]);
		i++;
	}
	return (0);
}
/*int main()
{
    int s[] = {1,2,3,4,5};
    int j[] = {1,2,3,7,5};

    *char s[] = "hicham@gmail.com";
    char j[] = "@";*
    int k;
    k = ft_memcmp(s,j,20);    
    printf("%d", k);

}*/
