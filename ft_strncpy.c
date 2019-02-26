/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 22:11:36 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/24 03:00:12 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		if (src[i] == '\0' || !src[i])
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
		len--;
	}
	return (dst);
}
