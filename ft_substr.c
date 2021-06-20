/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:36:08 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/10 11:36:16 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*arr;
	size_t			start_len;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (ft_strlen(s) - start > len)
		start_len = len;
	else
		start_len = ft_strlen(s) - start;
	if (!(arr = (char *)malloc((start_len + 1) * sizeof(char))))
		return (0);
	ft_strlcpy(arr, s + start, start_len + 1);
	return (arr);
}
