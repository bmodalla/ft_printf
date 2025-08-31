/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 20:51:08 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/31 16:40:00 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long	nbr;
	char	c[10];
	int		i;
	int		count;

	nbr = nb;
	i = 0;
	count = 0;
	if (nbr == 0)
		count += ft_putchar('0');
	if (nbr < 0)
	{
		count += ft_putchar('-');
		nbr *= -1;
	}
	while (nbr > 0)
	{
		c[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	while (i-- > 0)
		count += ft_putchar(c[i]);
	return (count);
}
