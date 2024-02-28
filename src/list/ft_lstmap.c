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

/**
 *  @brief
 *  Creates a new list, with the content of lst taken through f.
 *  If Anything goes wrong it clears the new list and returns NULL.
 *
 *  @warning     Allocates Memory, is to be freed.
 *  @param lst*  list of t_list
 *  @param f*    function to modify content
 *  @param del*  function to delete t_list node
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	head = NULL;
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
