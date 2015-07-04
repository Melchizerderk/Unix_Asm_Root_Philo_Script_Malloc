/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:31:29 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 12:49:19 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

void	init_memory(size_t size, t_block **lst_block)
{
	size_t	full_size;

	if (size <= TINY)
	{
		full_size = SIZEALLOCTINY;
	}
	else if (size <= SMALL)
	{
		full_size = SIZEALLOCSMALL;
	}
	else
	{
		full_size = (((size / getpagesize()) + 1) * getpagesize());
	}
	(*lst_block) = (t_block *)mmap(NULL, full_size, PROT_READ | PROT_WRITE,
												MAP_PRIVATE | MAP_ANON, -1, 0);
	(*lst_block)->next = NULL;
	(*lst_block)->prev = NULL;
	(*lst_block)->size = full_size - BLOCK_SIZE;
	(*lst_block)->ptr = (void *)&((*lst_block)->data[0]);
	(*lst_block)->free = 1;
}
