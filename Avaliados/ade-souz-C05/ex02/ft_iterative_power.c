/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:50:11 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/13 18:09:09 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int n;
	int res;

	n = 2;
	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
	{
		while (n <= power)
		{
			res *= nb;
			n++;
		}
	}
	return (res);
}

#include <stdio.h>

int main(void)
{
	int nb;
	nb = 0;
	int power;
	power = -3;

	nb = ft_iterative_power(nb, power);
	printf("%i", nb);
}
