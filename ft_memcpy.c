/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:44:31 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/17 17:56:07 by hamaarou         ###   ########.fr       */
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
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*int main() {
    char *src = "Hello World";
    char dest[100];

    ft_memcpy(dest, src, strlen(src)+1);
    printf("The copied string is %s\n", dest);
    printf("-----------\n");
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int dest_arr[n], i;

    ft_memcpy(dest_arr, arr, sizeof(arr));
    printf("The copied array is ");
    while (i < n)
    {
        printf("%d ", dest_arr[i]);
        i++;
    }
}*/
