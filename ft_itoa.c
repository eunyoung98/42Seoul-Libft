/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:39:49 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/14 13:26:18 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	int		len;

	len = 1;
	if (n < 0)
	{
		len++;
		if (n == -2147483648)
			n = 2147483647;
		else
			n = -n;
	}
	while (n / 10)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*arr;
	int		len;

	len = n_len(n);
	if (!(arr = malloc(sizeof(char) * (len + 1))))
		return (0);
	arr[len] = 0;
	if (n < 0)
	{
		while (len)
		{
			arr[len-- - 1] = "0123456789"[(n % 10) * -1];
			n = n / 10;
		}
		arr[0] = '-';
	}
	else
	{
		while (len)
		{
			arr[len-- - 1] = "0123456789"[n % 10];
			n = n / 10;
		}
	}
	return (arr);
}
