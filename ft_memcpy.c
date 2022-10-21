/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:44:31 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/21 16:15:50 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
/*int	main(void)
{
	char	s[];
	char	j[];
	char	s[];
	char	j[];

	s[] = "hicham amaarour";
	j[] = "hicham amaarour";
	ft_memcpy(s, s + 8, 4);
	printf("%s", s);
	memcpy(j, j + 8, 4);
	printf("%s", j);
}
*/
