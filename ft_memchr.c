/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:17:52 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/10 11:33:03 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy_s;
	unsigned char	str;

	i = 0;
	str = c;
	cpy_s = (unsigned char *)s;
	while (i < n)
	{
		if (cpy_s[i] == str)
			return (&cpy_s[i]);
		i++;
	}
	return (0);
}
