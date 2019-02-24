/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 18:01:10 by cdimitro          #+#    #+#             */
/*   Updated: 2019/02/23 18:09:40 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *res;

	if (!(res = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	res = (char*)malloc(sizeof(char) * size + 1);
	while (size--)
		res[size] = '\0';
	return (res);
}
