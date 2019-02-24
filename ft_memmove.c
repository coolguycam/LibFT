/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 21:38:42 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/22 21:54:32 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	int				j;
	unsigned char	*un_dst;
	unsigned char	*un_src;

	i = 0;
	j = 0;
	un_dst = (unsigned char*)dst;
	un_src = (unsigned char*)src;
	while (un_dst[i] != '\0')
		i++;
	while (len > 0)
	{
		un_dst[i] = un_src[j];
		i++;
		j++;
		len--;
	}
	return (dst);
}
