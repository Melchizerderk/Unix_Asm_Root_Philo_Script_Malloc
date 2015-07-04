/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcrespin <bcrespin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/11 17:31:17 by bcrespin          #+#    #+#             */
/*   Updated: 2015/05/11 17:31:20 by bcrespin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		nbr;
	int		sign;

	sign = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		sign = (*(str++) == '-' ? -sign : sign);
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + ((*(str++) - '0') * sign);
	return (nbr);
}
