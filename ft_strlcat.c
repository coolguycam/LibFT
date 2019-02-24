/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 21:48:47 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/22 05:36:40 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = dstsize;
	j = 0;
	while (dstsize > 0)
	{
		dst[i] = src[j];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return ((size_t)ft_strlen(dst));
}
