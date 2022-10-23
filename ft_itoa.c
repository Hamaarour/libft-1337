/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:54:31 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/23 14:11:38 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	calcul_digit(int n)
{
	int		i;
	long	num;

	num = (long)n;
	i = 0;
	if (num == 0)
		i++;
	if (num < 0)
		i++;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static char	*fun(int n, char *ptr, int j, long l)
{
	while (n != 0)
	{
		ptr[j] = n % 10 + '0';
		n /= 10;
		j--;
	}
	ptr[calcul_digit(l)] = 0;
	return (ptr);
}

static char	*replace(char *ptr)
{
	ptr[0] = '0';
	ptr[1] = 0;
	return (ptr);
}

char	*ft_itoa(int l)
{
	char	*ptr;
	int		j;
	long	n;

	n = (long)l;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ptr = malloc(calcul_digit(n) + 1);
	if (!ptr)
		return (NULL);
	if (n == 0)
		return (replace(ptr));
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	if (l > 0)
		j = calcul_digit(n) - 1;
	else
		j = calcul_digit(n);
	ptr = fun(n, ptr, j, l);
	return (ptr);
}
