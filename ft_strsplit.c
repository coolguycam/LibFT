/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:43:24 by cdimitro          #+#    #+#             */
/*   Updated: 2019/03/11 21:56:48 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_word_count(s, c);
	k = 0;
	if (!(res = (char**)malloc(sizeof(char*) * j + 1)))
		return (NULL);
	while (i < j)
	{
		while (s[k] == c && s[k])
			k++;
		res[i] = ft_word_delim(s, k, c);
		i++;
		while (s[k] != c && s[k] != 0)
			k++;
	}
	res[i] = NULL;
	return (res);
}
