/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 17:34:38 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/11 17:34:40 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char			*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		s1_len;

	if (s1 && s2)
	{
		i = 0;
		s1_len = ft_strlen(s1);
		while (s2[i] != '\0')
		{
			s1[s1_len] = s2[i];
			i++;
			s1_len++;
		}
		s1[s1_len] = '\0';
		return (s1);
	}
	return (s1);
}
