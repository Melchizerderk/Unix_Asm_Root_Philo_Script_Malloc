/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 17:36:35 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/11 17:36:36 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = ft_strlen((char *)s);
	if ((char)c == 0)
		return (char *)(s + n);
	while (i < n)
	{
		if (s[n - i] == (char)c)
			return ((char *)(&s[n - i]));
		i++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
