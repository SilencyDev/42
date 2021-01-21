/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:10:52 by kmacquet          #+#    #+#             */
/*   Updated: 2021/01/21 13:32:35 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*d;
	char		*s;

	d = (char *)dest;
	s = (char *)src;
	while (n--)
	{
		if ((*d++ = *s++) == (unsigned char)c)
			return (d);
	}
	return (NULL);
}
