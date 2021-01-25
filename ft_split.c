/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:10:09 by kmacquet          #+#    #+#             */
/*   Updated: 2021/01/25 17:44:52 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countword(char *str, char charset)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str == charset && *str)
			str++;
		if (*str != charset && *str)
		{
			while (*str != charset && *str)
				str++;
			i++;
		}
	}
	return (i);
}

void	ft_strcpy(char *start, char *s, char *dest)
{
	int		j;

	j = 0;
	while (start < s)
		dest[j++] = *start++;
	dest[j] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	char	*start;
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (!(dest = malloc(ft_countword(str, c) + 1)))
		return (NULL);
	while (*str)
	{
		if (*str != c)
		{
			start = str;
			while (*str && *str != c)
				str++;
			if (!(dest[i] = malloc(str - start + 1)))
				return (NULL);
			ft_strcpy(start, str, dest[i]);
			i++;
		}
		else
			str++;
	}
	dest[i] = 0;
	return (dest);
}
