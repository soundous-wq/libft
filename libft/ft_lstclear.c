/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 22:11:41 by soabbas           #+#    #+#             */
/*   Updated: 2022/05/17 17:26:17 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *elem;
    t_list  *next;
    
    elem = *lst;
    while (elem)
    {
        next = elem->next;
        (*del)(elem->content);
        free(elem);   
        elem = next;
    }
    *lst = NULL;
}