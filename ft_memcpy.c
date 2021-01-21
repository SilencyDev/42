/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 10:09:11 by kmacquet          #+#    #+#             */
/*   Updated: 2021/01/21 11:26:01 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptrdest;
	char	*ptrsrc;

	ptrdest = (char *)dest;
	ptrsrc = (char *)src;
	while (n--)
		*ptrdest++ = *ptrsrc++;
	return (dest);
}
