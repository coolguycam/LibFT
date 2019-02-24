/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:53:43 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/23 18:06:47 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	if (!(res = (char*)malloc(j - i + 1)))
		return (NULL);
	res = (char*)malloc(j - i + 1);
	k = 0;
	while (s[i] != s[j + 1])
	{
		res[k] = s[i];
		i++;
		k++;
	}
	res[k] = '\0';
	return (res);
}
