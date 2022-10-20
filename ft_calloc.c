/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:13:02 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/17 17:58:14 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	p = malloc(count * size);
	if (!p)
		return (NULL);
	while (i < count * size)
		((char *)p)[i++] = 0;
	return ((void *)p);
}
/*int main() {
    int *m = malloc(sizeof(int));
    int *c = calloc(2,sizeof(int));
    printf("the malloc adresse :%d \t and the valeur : %d",m, *m);
    printf("\nthe malloc adresse :%p \t and the valeur : %d",c, *c);
    printf("\n next : %p",c);
    printf("\n next : %p",*c);
    return (0);
}*/
