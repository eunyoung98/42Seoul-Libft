/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:14:59 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/10 11:28:29 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	str;

	i = 0;
	str = c;
	while (i < n)
	{
		*((unsigned char *)s + i) = str;
		i++;
	}
	return (s);
}
