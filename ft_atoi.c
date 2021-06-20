/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:33:47 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/14 14:24:00 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int			ft_atoi(const char *str)
{
	int					min;
	unsigned long long	sum;

	min = 1;
	sum = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			min = min * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = sum * 10;
		sum = sum + *str - 48;
		str++;
	}
	if (min == -1 && sum >= LLONG_MAX)
		return (0);
	if (min == 1 && sum > LLONG_MAX - 1)
		return (-1);
	return ((int)sum * min);
}
