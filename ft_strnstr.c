/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 23:20:55 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/25 03:13:52 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	i = 0;
	j = 0;
	k = 0;
	res = (char*)haystack;
	if (needle[i] == '\0')
		return (res);
	while (res[i] != '\0' && len > 0)
	{
		if (res[i] == needle[j])
		{
			k = i;
			while (res[i] == needle[j] && len > 0)
			{
				if (needle[j + 1] == '\0')
					return (&res[k]);
				i++;
				j++;
				len--;
			}
			j = 0;
			i = k;
		}
		i++;
		len--;
	}
	return (NULL);
}
