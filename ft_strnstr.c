/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:15:42 by kmacquet          #+#    #+#             */
/*   Updated: 2021/01/23 13:34:49 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	j;
	char	*string;
	char	*to_find;

	string = (char *)haystack;
	to_find = (char *)needle;
	i = 0;
	j = 0;
	if (!*to_find)
		return (string);
	while (*string && (j++ < len))
	{
		while ((string[i] == to_find[i]) && (j++ < len))
		{
			if (i + 1 == (int)ft_strlen(haystack))
				return (string);
			i++;
		}
		if (!to_find[i])
			return (string);
		i = 0;
		string++;
	}
	return (0);
}
