/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:23:06 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/17 17:30:32 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	if (!dest && !size)
		return (0);
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dest || size == 0)
		return (len_src + size);
	while (src[i] != '\0' && i < size - len_dest - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*int main ()
{
    char d[]= "hicham_";
    char s[] = "amaarour";
    int k = strlcat(d,s,8);
    printf("%d",k);

}*/
