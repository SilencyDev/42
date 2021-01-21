/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:11:16 by kmacquet          #+#    #+#             */
/*   Updated: 2021/01/21 16:35:08 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	char	*lasts;
	char	*lastd;

	d = (char	*)dest;
	s = (char	*)src;
	if (d < s)
		return (ft_memcpy(dest, src, n));
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
