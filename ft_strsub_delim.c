/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub_delim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 00:01:57 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/24 00:39:50 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub_delim(char const *s, unsigned int start, char c)
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
