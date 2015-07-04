/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 17:34:44 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/11 17:34:46 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			if (s[i] == (char)c)
				return ((char *)(&s[i]));
			i++;
		}
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
	}
	return (NULL);
}
