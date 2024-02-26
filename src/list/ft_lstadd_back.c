/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/20 14:23:39 by mweverli      #+#    #+#                 */
/*   Updated: 2021/12/12 15:16:41 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  Takes a t_list* node, new, and add it to the last node of list, lst,
 *  if no list is give it will set new as the head of the list.
 *
 *  @param lst** locatoin of linked list of t_list
 *  @param new*  a node of t_list
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
