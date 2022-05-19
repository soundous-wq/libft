/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soabbas <soabbas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:40:40 by soabbas           #+#    #+#             */
/*   Updated: 2022/05/19 13:11:02 by soabbas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *result;
    t_list  *temp;

    temp = NULL;
    while (lst)
    {
        temp = ft_lstnew(f(lst->content));         
        if (!temp)
        {
            ft_lstclear(&temp, del);
            return (NULL);
        }
        ft_lstadd_back(&result, temp); 
        lst = lst->next;
    }
    return (result);
}
