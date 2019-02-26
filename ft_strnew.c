/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 18:01:10 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/25 06:05:54 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*res;

	i = 0;
	if (!(res = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	res = (char*)malloc(sizeof(char) * size + 1);
	while (i <= size)
	{
		res[i] = '\0';
		i++;
	}
	res[i] = '\0';
	return (res);
}
