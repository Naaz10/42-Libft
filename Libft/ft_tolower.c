/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naazafrin <naazafrin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:35:28 by naazafrin         #+#    #+#             */
/*   Updated: 2022/08/14 11:41:36 by naazafrin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
	

	int	ft_tolower(int c)
	{
		if (c >= 'A' && c <= 'Z')
			return (c + 32);
		return (c);
	}

