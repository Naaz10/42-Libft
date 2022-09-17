/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naazafrin <naazafrin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:21:10 by naazafrin         #+#    #+#             */
/*   Updated: 2022/09/10 13:31:01 by naazafrin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = c;
	while (*s && (unsigned char)*s != ch)
		s++;
	if (ch == (unsigned char)*s)
		return ((char *)s);
	else
		return (NULL);


}


