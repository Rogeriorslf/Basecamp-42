/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:34:22 by ade-souz          #+#    #+#             */
/*   Updated: 2021/04/13 18:14:47 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n * n < nb)
		++n;
	if (n * n == nb)
		return (n);
	return (0);
}

#include <stdio.h>

int main(void)
{
	int nb;
	nb = 81;

	nb = ft_sqrt(nb);
	printf("%i", nb);
}
