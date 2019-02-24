/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 14:14:53 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/22 21:54:48 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int				i;
	unsigned char	*un_dst;
	unsigned char	*un_src;

	i = 0;
	un_dst = (unsigned char*)dst;
	un_src = (unsigned char*)src;
	while (n > 0)
	{
		un_dst[i] = un_src[i];
		i++;
		n--;
	}
	return (dst);
}
