/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:37:57 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/14 13:29:33 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_trimstart(char const *s1, char const *set)
{
	unsigned int	idx;

	idx = 0;
	while (s1[idx])
	{
		if (ft_strchr(set, s1[idx]) == 0)
			break ;
		idx++;
	}
	return (idx);
}

static unsigned int	ft_trimend(char const *s1, char const *set, unsigned int st)
{
	unsigned int	idx;

	idx = ft_strlen(s1) - 1;
	while (idx >= st)
	{
		if (ft_strchr(set, s1[idx]) == 0)
			break ;
		idx--;
	}
	return (idx);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char			*arr;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;

	if (!s1)
		return (0);
	if (!s1[0])
		return (ft_calloc(1, 1));
	start = ft_trimstart(s1, set);
	end = ft_trimend(s1, set, start);
	if (!(arr = malloc(sizeof(char) * (end - start + 2))))
		return (0);
	i = 0;
	while (i < end - start + 1)
	{
		arr[i] = s1[start + i];
		i++;
	}
	arr[i] = 0;
	return (arr);
}
