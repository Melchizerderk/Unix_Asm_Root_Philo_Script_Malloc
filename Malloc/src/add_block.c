/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_block.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:29:18 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 12:47:21 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

t_block *add_block(size_t size, t_block *lst_block)
{
	t_block *b;

	b = lst_block;
	while (b->next)
	{
		b = b->next;
	}
	b->next = creat_memory(size);
	return (b->next);
}
