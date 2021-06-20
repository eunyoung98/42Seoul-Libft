/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehwangbo <ehwangbo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:33:47 by ehwangbo          #+#    #+#             */
/*   Updated: 2021/05/11 18:01:06 by ehwangbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;
	t_list	*new;

	if (!(head = ft_lstnew(0)))
		return (0);
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		ft_lstadd_back(&head, new);
		if (!new)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		lst = lst->next;
	}
	temp = head;
	head = head->next;
	ft_lstdelone(temp, del);
	return (head);
}
