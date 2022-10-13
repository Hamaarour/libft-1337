/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:23:11 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/12 11:35:42 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *k, int c, size_t len)
{
    unsigned char *new;
    size_t i;

    //new = (unsigned char *) k;
    i = 0;
    while (i++ < len)
        ((unsigned char *) k)[i] = (unsigned char) c;
        i++;
    return (k);
}

int main()
{
    printf("%s","\n---------------------------\n");
    //char a[] = {"Hello JournalDev"};    
    int a[6] = {1,2,3,4,5,6};
    //printf("a = %d\n", a[0]);
    printf("%s","---------------------------\n");
    //printf("Filling the first 5 characters a with 'H' using memset\n");         
    ft_memset(a, 5, 3); 
    printf("%s","---------------------------\n");        
    printf("original memset, a = %d\n", a[0]);
    /*printf("%s","---------------------------\n"); 
    printf("%s","---------------------------\n"); 

    ft_memset(a, 'H', 3);       
    printf("my memset, a = %s\n", a);
    printf("%s","---------------------------\n");  */
    return 0; 
    
}