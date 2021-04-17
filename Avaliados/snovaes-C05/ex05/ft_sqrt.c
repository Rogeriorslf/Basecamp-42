/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 07:22:37 by snovaes           #+#    #+#             */
/*   Updated: 2021/04/16 01:36:20 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i * i < nb && i * i > 0)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

#include<stdio.h>

int main(void)
{
	printf("%i", ft_sqrt(81));
}
