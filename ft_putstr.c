/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmodalla <bmodalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 21:26:30 by bmodalla          #+#    #+#             */
/*   Updated: 2025/08/31 16:57:14 by bmodalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		count += 6;
	}
	else
	{
		while (str[i] != '\0')
		{
			count += write(1, &str[i], 1);
			i++;
		}
	}
	return (count);
}
