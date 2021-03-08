/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 17:10:09 by kmacquet          #+#    #+#             */
/*   Updated: 2021/03/08 19:59:54 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int			ft_countword(char *str, char *charset)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (is_charset(*str, charset) && *str)
			str++;
		if (!is_charset(*str, charset) && *str)
		{
			while (!is_charset(*str, charset) && *str)
				str++;
			i++;
		}
	}
	return (i);
}

void		ft_strcpy(char *start, char *str, char *dest)
{
	int		j;

	j = 0;
	while (start < str)
		dest[j++] = *start++;
	dest[j] = '\0';
}

char		**ft_split_str(char const *s, char *charset)
{
	char	**dest;
	char	*start;
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	if (!s)
		return (NULL);
	if (!(dest = malloc(sizeof(char *) * (ft_countword(str, charset) + 1))))
		return (NULL);
	while (*str)
		if (!is_charset(*str, charset))
		{
			start = str;
			while (*str && !is_charset(*str, charset))
				str++;
			dest[i] = malloc(str - start + 1);
			ft_strcpy(start, str, dest[i]);
			i++;
		}
		else
			str++;
	dest[i] = NULL;
	return (dest);
}
