/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdimitro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 22:28:57 by cdimitro          #+#    #+#             */
/*   Updated: 2019/03/06 03:15:48 by cdimitro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_neg(int n, int count)
{
	char *res;

	if (!(res = (char*)malloc(sizeof(char) * count + 2)))
		return (NULL);
	res = (char*)malloc(sizeof(char) * count + 2);
	res[0] = '-';
	res[count + 1] = '\0';
	n = -n;
	while (count >= 1)
	{
		res[count] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	return (res);
}

static char	*ft_itoa_pos(int n, int count)
{
	char *res;

	if (!(res = (char*)malloc(sizeof(char) * count + 2)))
		return (NULL);
	res = (char*)malloc(sizeof(char) * count + 1);
	res[count] = '\0';
	count--;
	while (count >= 0)
	{
		res[count] = (n % 10) + '0';
		n /= 10;
		count--;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	int		store;
	int		count;
	char	*res;

	store = n;
	count = 1;
	res = NULL;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while (store > 9)
	{
		store /= 10;
		count++;
	}
	while (store < -9)
	{
		store /= 10;
		count++;
	}
	if (n < 0)
		res = ft_itoa_neg(n, count);
	else
		res = ft_itoa_pos(n, count);
	return (res);
}
