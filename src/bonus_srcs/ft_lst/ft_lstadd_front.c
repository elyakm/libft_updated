/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:39:01 by klaksi            #+#    #+#             */
/*   Updated: 2022/11/10 12:32:23 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		*lst = new;
	new->next = *lst;
	*lst = new;
}
