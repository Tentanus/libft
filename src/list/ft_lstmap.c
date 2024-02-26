/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/22 13:34:59 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/13 15:12:03 by mweverli      ########   odam.nl         */
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

/* Potential rewrite.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}
*/
