/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naazafrin <naazafrin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 20:05:46 by nafrin            #+#    #+#             */
/*   Updated: 2022/09/10 13:46:27 by naazafrin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_readwords(char const *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

int	ft_wordlen(char const *str, char c)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

char	**ft_split2(char const *str, char c, char **mem)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	mem = (char **)malloc(sizeof(char *) * (ft_readwords(str, c) + 1));
	if (!mem)
		return (NULL);
	while (ft_readwords(str, c) > ++i)
	{
		k = 0;
		while (str[j] == c && str[j] != '\0')
			j++;
		mem[i] = (char *)malloc(sizeof(char) * ft_wordlen(&str[j], c) + 1);
		if (!mem[i])
			return (NULL);
		while (str[j] != c && str[j] != '\0')
		{
			mem[i][k++] = str[j++];
		}
		mem[i][k] = '\0';
	}
	mem[i] = 0;
	return (mem);
}

char	**ft_split(char const *str, char c)
{
	char	**mem;

	mem = NULL;
	if (!str)
		return (NULL);
	return (ft_split2(str, c, mem));
}
