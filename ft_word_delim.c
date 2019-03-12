/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_delim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 04:25:24 by cdimitro          #+#    #+#             */
/*   Updated: 2019/03/11 21:50:55 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_word_delim(char const *s, unsigned int start, char c)
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
	while (s[start] != c && s[start] != 0)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
