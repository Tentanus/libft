/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/22 13:34:59 by mweverli      #+#    #+#                 */
/*   Updated: 2021/11/24 11:05:27 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	lst = lst->next;
	tmp = head;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
		tmp = tmp->next;
	}
	return (head);
}
