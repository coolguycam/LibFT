/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:43:24 by cdimitro          #+#    #+#             */
/*   Updated: 2019/03/06 03:13:35 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i])
			i++;
		count++;
		while (s[i] == c)
			i++;
	}
	return (count);
}

static char	*ft_strsub_delim(char const *s, unsigned int start, char c)
{
	int		i;
	int		store;
	int		size;
	char	*res;

	i = 0;
	store = start;
	size = 1;
	while (s[store] != c)
	{
		size++;
		store++;
	}
	if (!(res = (char*)malloc(size)))
		return (NULL);
	res = (char*)malloc(size);
	while (s[start] != c)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

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
		res[i] = ft_strsub_delim(s, k, c);
		i++;
		while (s[k] != c && s[k])
			k++;
	}
	res[i] = NULL;
	return (res);
}
