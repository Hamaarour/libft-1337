/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:54:31 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/13 17:53:35 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	calc_digit(size_t num)
{
	size_t	i;

	i = 0;
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	nbr_digit;
	int		j;
	int		k;

	if (n > 0)
	{
		nbr_digit = calc_digit(n);
		ptr = (char *)malloc(nbr_digit + 1);
		while (nbr_digit > 0)
		{
			j = (n % 10);
			ptr[nbr_digit - 1] = j + '0';
			n = (n / 10);
			nbr_digit--;
		}
	}	
	else
	{
		n *= (-1);
		nbr_digit = calc_digit(n) + 1;
		ptr = (char *)malloc(nbr_digit + 2);
		ptr[0] = '-';
		while (nbr_digit > 1)
		{
			j = (n % 10);
			ptr[nbr_digit - 1] = j + '0';
			n = (n / 10);
			nbr_digit--;
		}
	}
	if (ptr)
	{
		k = calc_digit(n);
		ptr[k - 1] = 0;
		return (ptr);
	}
	return (NULL);
}
int main(void)
{
    char    *k = ft_itoa(-1234567891);
    
    printf("%s", k);
}
