/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 00:16:04 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/25 03:15:17 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
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
	while (res[i] != '\0')
	{
		if (res[i] == needle[j])
		{
			k = i;
			while (res[i] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return (&res[k]);
				i++;
				j++;
			}
			j = 0;
			i = k;
		}
		i++;
	}
	return (NULL);
}
