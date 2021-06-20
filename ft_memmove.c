/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:17:09 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/11 13:41:55 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (n == 0)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
			i++;
		}
	}
	else if (dest > src)
	{
		n--;
		while (n > 0)
		{
			*(unsigned char*)(dest + n) = *(unsigned char*)(src + n);
			n--;
		}
		*(unsigned char*)dest = *(unsigned char*)src;
	}
	return (dest);
}
