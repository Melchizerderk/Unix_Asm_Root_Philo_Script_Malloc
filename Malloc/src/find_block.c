/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_block.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:29:29 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 11:29:33 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

t_block *find_block(size_t size, t_block *lst_block)
{
	t_block *b;

	b = lst_block;
	while (b)
	{
		if (b->free == 1 && b->size >= (size + BLOCK_SIZE))
		{
			return (b);
		}
		b = b->next;
	}
	return (NULL);
}
