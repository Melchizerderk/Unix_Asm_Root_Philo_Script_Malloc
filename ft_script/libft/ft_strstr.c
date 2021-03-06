/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 17:36:46 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/11 17:36:48 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static int		ft_comp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s2[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	match;

	i = 0;
	match = 0;
	if (*s2 == 0)
		return ((char *)s1);
	if (s1 && s2)
	{
		while (s1[i] != '\0')
		{
			if (s1[i] == s2[0])
			{
				match = ft_comp(((char *)s1 + i), ((char *)s2));
				if (match == 1)
					return ((char *)s1 + i);
			}
			i++;
		}
	}
	return (NULL);
}
