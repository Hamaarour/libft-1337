/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:55:37 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/13 10:14:19 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int n;
    int res;

    i = 0;
    n = 1;

    while (str[i] <= 32)
        i++;
    if (str[i] == '-')
    {
        n *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {   res= res*10 +str[i] - '0';
        i++;
    }
    return (res * n);
}
int main ()
{
    printf("%d", ft_atoi("15"));
    printf("\n");
    printf("%d", atoi("15"));
}
