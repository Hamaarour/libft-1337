/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:23:11 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/23 14:11:59 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *k, int c, size_t len)
{
	unsigned char	*new;
	size_t			i;

	new = (unsigned char *)k;
	i = 0;
	while (i < len)
	{
		new[i] = (unsigned char)c;
		i++;
	}
	return (new);
}
