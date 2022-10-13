/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:56:41 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/12 11:36:25 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(char *s1, char *s2,  unsigned int n)
{
    unsigned int i;

    i = 0;
    while((s1[i]!= '\0' || s2[i] !='\0') && i < n)
    {
        if (s1[i] <= s2[i])
            return (-1);
        if (s1[i] >= s2[i])
            return (1);
        i++;
    }
    return (0);
}
int main ()
{
    printf("%d", ft_strncmp("hcxv","hijham",3));
    printf("\n");
    printf("%d", strncmp("hcxv","hijham",3));
}
