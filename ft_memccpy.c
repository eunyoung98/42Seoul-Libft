/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:16:17 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/10 11:28:48 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	str;
	unsigned char	*cpy_dest;
	unsigned char	*cpy_src;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (0);
	cpy_dest = dest;
	cpy_src = (unsigned char *)src;
	str = c;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		if (cpy_src[i] == str)
			return (dest + (i + 1));
		i++;
	}
	return (0);
}
