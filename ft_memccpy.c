/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 20:20:35 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/25 03:16:12 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*ndst;
	unsigned char	*nsrc;

	i = 0;
	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	while (n-- > 0)
	{
		if (nsrc[i] == (char)c)
		{
			ndst[i] = nsrc[i];
			return (&ndst[i + 1]);
		}
		ndst[i] = nsrc[i];
		i++;
	}
	return (NULL);
}
