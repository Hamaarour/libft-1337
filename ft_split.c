/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamaarou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:27:03 by hamaarou          #+#    #+#             */
/*   Updated: 2022/10/21 18:16:14 by hamaarou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s[0] != sep)
	{
		i++;
		count++;
	}
	while (s[i])
	{
		if (s[i] != sep && s[i - 1] == sep)
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

static void	free_space(char **p, char const *s, char sep)
{
	size_t	i;

	i = 0;
	while (i < count_word(s, sep))
	{
		free(p[i]);
		i++;
	}
}

char	**ft_split(char const *s, char sep)
{
	char	**p;
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	p = (char **)malloc((count_word(s, sep) + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != sep)
		{
			start = i;
			while (s[i] && s[i] != sep)
				i++;
			p[j++] = ft_substr(s, start, (i - start));
			if (!p)
				free_space(p, s, sep);
		}
		else
			i++;
	}
	p[j] = 0;
	return (p);
}

/*int	main(void)
{
	char	*s;
	char	sep;
	int		i;
	char	**t;

	s = "student in 1337 Bengurir";
	sep = ' ';
	i = 0;
	t = ft_split((void *)0, ' ');
	while (t[i])
	{
		printf("%s\n", t[i]);
		i++;
	}
}
*/
