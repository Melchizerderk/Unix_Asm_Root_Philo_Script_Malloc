/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/21 11:31:41 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/21 11:31:43 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malloc.h"

void	ft_putbase(long long int n, int base, char *tab_base)
{
	if (n >= base)
	{
		ft_putbase(n / base, base, tab_base);
		ft_putbase(n % base, base, tab_base);
	}
	else
		write(1, &(tab_base[n]), 1);
}

void	ft_putstr(char const *str)
{
	while (*str)
	{
		ft_putchar((char)*str);
		str++;
	}
}

void	ft_putchar(int ch)
{
	write(1, &ch, 1);
}
