/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 21:29:44 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/31 16:40:08 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_tohex(unsigned int value, char type)
{
	char	*s;
	int		count;

	count = 0;
	if (type == 'x')
		s = "0123456789abcdef";
	else if (type == 'X')
		s = "0123456789ABCDEF";
	if (value >= 16)
	{
		count += ft_tohex(value / 16, type);
		count += ft_putchar(s[value % 16]);
	}
	else
		count += ft_putchar(s[value]);
	return (count);
}
