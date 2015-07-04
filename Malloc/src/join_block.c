/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_block.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:31:32 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 12:49:54 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

t_block *join_block(t_block *curent, t_block *to_join)
{
	curent->size = curent->size + to_join->size + BLOCK_SIZE;
	curent->next = to_join->next;
	if (curent->next != NULL)
	{
		if (curent->next->next != NULL)
		{
			curent->next->prev = curent;
		}
	}
	return (curent);
}
