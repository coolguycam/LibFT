/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 23:20:55 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/22 21:52:24 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = (char*)haystack;
	if (needle[i] == '\0')
		return (res);
	while (len > 0)
	{
		if (res[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&res[i - j]);
			i++;
			j++;
			len--;
		}
		else
			break ;
	}
	return (NULL);
}
