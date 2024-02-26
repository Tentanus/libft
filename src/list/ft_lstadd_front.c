/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mweverli <mweverli@codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/19 16:37:57 by mweverli      #+#    #+#                 */
/*   Updated: 2021/11/21 11:50:14 by mweverli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  @brief
 *  Takes a t_list* node, new, and add it to the front of the list, lst,
 *  if no list is give it will set new as the head of the list.
 *
 *  @param lst** locatoin of linked list of t_list
 *  @param new*  a node of t_list
 */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
