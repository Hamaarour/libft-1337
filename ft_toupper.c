/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:57:07 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/12 11:36:58 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int j)
{
    
    if(j >= 97 && j <= 122)
        return (j - 32);
    return (j);
}
int main()
{
    printf("%c",ft_toupper(67));    
    printf("\n");
    printf("%c",toupper(67));
}
