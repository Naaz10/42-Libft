/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naazafrin <naazafrin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:31:09 by nafrin            #+#    #+#             */
/*   Updated: 2022/08/27 21:34:52 by naazafrin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *t;
	t_list *tmp;

	t = *lst;
	while (t)
	{
		tmp = t->next;
		ft_lstdelone(t, del);
		t = tmp;
	}
	*lst = NULL;
}

