/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:41:57 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/13 18:04:23 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int n;
	int res;

	n = 1;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return(1);
	else if (nb > 0)
	{
		while (n <= nb)
		{
			res *= n;
			n++;
		}
	}
	return (res);
}

#include <stdio.h>

int main(void)
{
	int nb;
	nb = 5;
	nb = ft_iterative_factorial(0);
	printf("%i", nb);
}
