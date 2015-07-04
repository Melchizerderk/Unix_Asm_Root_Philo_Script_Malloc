/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_alloc_mem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:31:46 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 12:52:04 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>

void	show_alloc_mem(void)
{
	int		i;
	size_t	total;
	t_block **lsts_block;

	lsts_block = get_type_lsts_block();
	i = 0;
	total = 0;
	while (i != 3)
	{
		print_head(i);
		total = total + print_info(lsts_block[i]);
		i++;
	}
	ft_putstr("Total : ");
	ft_putbase((long long int)total, 10, "0123456789");
	ft_putstr(" octets\n");
}

int		print_info(t_block *lst_block)
{
	t_block *b;
	size_t	total;

	total = 0;
	if (lst_block != NULL)
	{
		b = lst_block;
		while (b->next)
		{
			if (b->free != 1)
			{
				ft_putstr("0x");
				ft_putbase((long long int)b, 16, "0123456789ABCDEF");
				ft_putstr(" - 0x");
				ft_putbase((long long int)b->next, 16, "0123456789ABCDEF");
				ft_putstr(" : ");
				ft_putbase((long long int)b->size, 10, "0123456789");
				ft_putstr(" octets");
				ft_putchar('\n');
				total = total + b->size;
			}
			b = b->next;
		}
	}
	return (total);
}

size_t	get_total_size(t_block *lst_block)
{
	size_t	total;
	t_block *b;

	b = lst_block;
	while (b->next)
	{
		if (b->free != 1)
		{
			total = total + b->size;
		}
		b = b->next;
	}
	return (total);
}

void	print_head(int type)
{
	t_block **lsts_block;

	lsts_block = get_type_lsts_block();
	if (type == 0)
	{
		ft_putstr("TINY : 0x");
	}
	else if (type == 1)
	{
		ft_putstr("SMALL : 0x");
	}
	else
	{
		ft_putstr("LARGE : 0x");
	}
	ft_putbase((long long int)lsts_block[type], 16, "0123456789ABCDEF");
	ft_putchar('\n');
}
