/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignednb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 21:31:15 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/31 16:40:15 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsignednb(unsigned int u)
{
	char	c[10];
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (u == 0)
		count += ft_putchar('0');
	while (u > 0)
	{
		c[i++] = u % 10 + '0';
		u /= 10;
	}
	while (i-- > 0)
		count += ft_putchar(c[i]);
	return (count);
}
