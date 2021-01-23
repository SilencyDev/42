/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:39:29 by kmacquet          #+#    #+#             */
/*   Updated: 2021/01/23 14:17:40 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;

	if(!(dest = malloc(sizeof(char) * (int)len + 1)) && !len)
		return (NULL);
	while ((char)s[start] && len--)
		ft_strlcpy(dest, (char *)s, len);
	return (dest);
}
