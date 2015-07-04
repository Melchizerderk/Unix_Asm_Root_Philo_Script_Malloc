/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_block.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:31:50 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 11:31:51 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

t_block *split_block(size_t size, t_block *lst_block)
{
	lst_block->next = (lst_block->ptr + sizeof(char)) + size;
	lst_block->next->next = NULL;
	lst_block->next->prev = lst_block;
	lst_block->next->size = lst_block->size - size - BLOCK_SIZE;
	lst_block->next->ptr = (void *)&(lst_block->next->data[0]);
	lst_block->next->free = 1;
	lst_block->size = size;
	lst_block->free = 0;
	return (lst_block);
}
