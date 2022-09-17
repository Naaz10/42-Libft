/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naazafrin <naazafrin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:05:07 by nafrin            #+#    #+#             */
/*   Updated: 2022/09/17 10:15:40 by naazafrin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t		ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);

}





