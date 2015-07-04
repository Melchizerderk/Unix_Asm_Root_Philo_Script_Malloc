/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:29:34 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 12:48:46 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"
#include <stdio.h>

void	free(void *ptr)
{
	t_block *b;

	if (ptr == NULL)
		return ;
	if (check_sir(ptr) == 0)
		return ;
	b = (t_block *)(ptr - (BLOCK_SIZE - sizeof(char *)));
	b->free = 1;
	if (b->next && b->next->free == 1)
	{
		join_block(b, b->next);
	}
	else if (b->prev && b->prev->free == 1)
	{
		join_block(b->prev, b);
	}
}

int		check_sir(void *ptr)
{
	t_block *b;
	t_block **lsts_block;
	t_block *lst_block;
	int		i;

	i = 0;
	lsts_block = get_type_lsts_block();
	b = (t_block *)(ptr - (BLOCK_SIZE - sizeof(char *)));
	while (i < 3)
	{
		lst_block = lsts_block[i];
		while (lst_block)
		{
			if (b == lst_block)
				return (1);
			lst_block = lst_block->next;
		}
		i++;
	}
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*sav_dest;
	const char	*sav_src;

	sav_dest = dest;
	sav_src = src;
	while (n--)
		*sav_dest++ = *sav_src++;
	return (dest);
}
