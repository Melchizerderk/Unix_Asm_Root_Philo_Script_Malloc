/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 17:32:57 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/11 17:32:59 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s2)
	{
		while (i < n)
		{
			*((char *)s1 + i) = *((char *)s2 + i);
			i++;
		}
		return (s1);
	}
	else
		return (0);
}
