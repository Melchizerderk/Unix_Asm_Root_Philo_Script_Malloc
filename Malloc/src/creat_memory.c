/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:29:25 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 11:29:26 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

t_block *creat_memory(size_t size)
{
	t_block *b;
	size_t	full;

	if (size <= TINY)
	{
		full = SIZEALLOCTINY;
	}
	else if (size <= SMALL)
	{
		full = SIZEALLOCSMALL;
	}
	else
	{
		full = (((size / getpagesize()) + 1) * getpagesize());
	}
	b = mmap(NULL, full, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0);
	b->next = NULL;
	b->prev = NULL;
	b->size = full - BLOCK_SIZE;
	b->ptr = (void *)&(b->data[0]);
	b->free = 1;
	return (b);
}
