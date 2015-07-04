/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:31:35 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 12:50:20 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

void	*malloc(size_t size)
{
	int		type;
	t_block *b;
	t_block **lsts_block;

	lsts_block = get_type_lsts_block();
	type = get_type(size);
	if (lsts_block[type] == NULL)
	{
		init_memory(size, &lsts_block[type]);
	}
	if ((b = find_block(size, lsts_block[type])) != NULL)
	{
		b = split_block(size, b);
	}
	else
	{
		b = add_block(size, lsts_block[type]);
		if ((b = find_block(size, lsts_block[type])) != NULL)
		{
			b = split_block(size, b);
		}
	}
	return (b->ptr);
}

t_block **get_type_lsts_block(void)
{
	static	t_block *lsts_block[3];

	return (lsts_block);
}
