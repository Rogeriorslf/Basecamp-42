/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:12:10 by lfelipe-          #+#    #+#             */
/*   Updated: 2021/04/16 00:34:44 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	int		i;
	char	numbers[10];

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb == 0)
		ft_putchar('0');
	else if (nb < 0 && nb != -2147483648)
	{
		nb *= -1;
		ft_putchar('-');
	}
	while (nb > 0)
	{
		numbers[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(numbers[i]);
		i--;
	}
}
