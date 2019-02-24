/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:43:24 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/24 00:39:55 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	i = 0;
	j = ft_wordcount(s, c);
	k = 0;
	if (!(res = (char**)malloc(sizeof(char*) * j)))
		return (NULL);
	res = (char**)malloc(sizeof(char*) * j);
	while (i < j)
	{
		while (s[k] == c && s[k])
			k++;
		res[i] = ft_strsub_delim(s, k, c);
		i++;
		while (s[k] != c && s[k])
			k++;
	}
	return (res);
}
