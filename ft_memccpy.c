/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 20:20:35 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/22 21:53:53 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*un_dst;
	unsigned char	*un_src;
	unsigned char	a;

	i = 0;
	un_dst = (unsigned char*)dst;
	un_src = (unsigned char*)src;
	a = (unsigned char)c;
	while (n > 0)
	{
		if (un_src[i] == a)
			return (&un_dst[i + 1]);
		un_dst[i] = un_src[i];
		i++;
		n--;
	}
	return (NULL);
}
