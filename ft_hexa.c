/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:31:45 by isrodrig          #+#    #+#             */
/*   Updated: 2023/03/09 16:35:19 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbrbase(unsigned int n, char *base)
{
	int	nbr;

	nbr = 0;
	if (n >= 16)
	{
		nbr += ft_putnbrbase(n / 16, base);
		if (nbr == -1)
			return (-1);
		n = n % 16;
	}
	if (n < 16)
	{
		write(1, &base[n], 1);
		nbr++;
	}
	return (nbr);
}

unsigned int	ft_nosign(unsigned int i)
{
	int	n;

	n = 0;
	if (i > 9)
	{
		n = ft_nosign(i / 10);
		if (n == -1)
			return (-1);
		i = i % 10;
	}
	if (i <= 9)
	{
		if (ft_putchar(('0' + i)) == -1)
			return (-1);
		n++;
	}
	return (n);
}
