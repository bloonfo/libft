/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:36:21 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/22 11:44:14 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  ft_lstmap(t_listlst, void (f)(void), void (del)(void *))
{
    t_list    *tmp1;
    t_list    tmp2;

    if (!f || !del)
        return (NULL);
    tmp1 = NULL;
    while (lst)
    {
        if (!(tmp2 = ft_lstnew((f)(lst->content))))
        {
            while (tmp1)
            {
                tmp2 = tmp1->next;
                (*del)(tmp1->content);
                free(tmp1);
                tmp1 = tmp2;
            }
            lst = NULL;
            return (NULL);
        }
        ft_lstadd_back(&tmp1, tmp2);
        lst = lst->next;
    }
    return (tmp1);
}
