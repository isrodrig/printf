/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrodrig <isrodrig@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:31:45 by isrodrig          #+#    #+#             */
/*   Updated: 2023/03/09 16:35:33 by isrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_baselong(unsigned long long n, char *base)
{
	long long	nbr;

	nbr = 0;
	if (n >= 16)
	{
		nbr += ft_baselong(n / 16, base);
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

int	ft_putp(unsigned long long i)
{
	if (write(1, "0x", 2) != 2)
		return (-1);
	return (ft_baselong(i, "0123456789abcdef") + 2);
}
