/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:39:04 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/17 12:32:44 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**ft_clear(char **arr, unsigned int len)
{
	size_t		i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (0);
}

static unsigned int	ft_chk_char(char str, char c)
{
	if (str == c)
		return (1);
	else
		return (0);
}

static unsigned int	count_word(char const *s, char c)
{
	unsigned int	idx;
	unsigned int	cnt;

	cnt = 0;
	idx = 0;
	while (s[idx])
	{
		while (s[idx] && ft_chk_char(s[idx], c))
			idx++;
		if (s[idx] && !ft_chk_char(s[idx], c))
			cnt++;
		while (s[idx] && !ft_chk_char(s[idx], c))
			idx++;
	}
	return (cnt);
}

static unsigned int	count_len(char const *s, char c)
{
	unsigned int	len;

	len = 0;
	while (s[len] && !ft_chk_char(s[len], c))
		len++;
	return (len);
}

char				**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	res_idx;
	unsigned int	idx;

	if (!s)
		return (0);
	if (!(result = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1))))
		return (0);
	res_idx = 0;
	while (*s && count_word(s, c))
	{
		while (*s && ft_chk_char(*s, c))
			s++;
		if (!(result[res_idx] = (char *)malloc(count_len(s, c) + 1)))
			return (ft_clear(result, count_word(s, c) + 1));
		idx = 0;
		while (*s && !ft_chk_char(*s, c))
			result[res_idx][idx++] = *s++;
		result[res_idx][idx] = '\0';
		while (*s && ft_chk_char(*s, c))
			s++;
		res_idx++;
	}
	result[res_idx] = 0;
	return (result);
}
