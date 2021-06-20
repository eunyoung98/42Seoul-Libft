/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:09:35 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/10 18:01:29 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *lit, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	temp;

	i = 0;
	arr = (char *)big;
	if (*lit == 0)
		return (arr);
	while (arr[i] && i < len)
	{
		temp = 0;
		if (lit[temp] == arr[i + temp])
		{
			while (lit[temp] && arr[i + temp])
			{
				if (lit[temp] != arr[i + temp] || (i + temp) >= len)
					break ;
				temp++;
			}
			if (lit[temp] == '\0')
				return (&arr[i]);
		}
		i++;
	}
	return (0);
}
