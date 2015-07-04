/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 17:36:14 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/11 17:36:15 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 && s2 && n)
	{
		while (i < n && s2[i] != '\0')
		{
			s1[i] = s2[i];
			i++;
		}
		if (ft_strlen(s1) < n || (s2[i] == '\0' && ft_strlen(s2) <= n))
			s1[i] = '\0';
		while (i < n)
		{
			s1[i] = '\0';
			i++;
		}
	}
	return (s1);
}
