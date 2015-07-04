/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:31:44 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 12:50:30 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

void	*realloc(void *ptr, size_t size)
{
	t_block *b;
	void	*ret;

	b = (t_block *)(ptr - (BLOCK_SIZE - sizeof(char *)));
	if (check_sir(ptr) == 0)
		return (NULL);
	if (size < b->size)
	{
		return (split_block(size, b)->ptr);
	}
	else if (b->size == size)
	{
		return (ptr);
	}
	else
	{
		free(ptr);
		ret = malloc(size);
		ret = ft_memcpy(ret, b->ptr, b->size);
	}
	return (ret);
}
