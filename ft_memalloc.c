/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 00:07:51 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/23 18:19:40 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *res;

	if (!(res = (unsigned char*)malloc(sizeof(char) * size)))
		return (NULL);
	res = (unsigned char*)malloc(sizeof(char) * size);
	ft_bzero(res, size);
	return (res);
}
