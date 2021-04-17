/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:25:06 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/12 01:25:49 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

int	ft_validete(char *pointer)
{
	if ((pointer[0] == '1' && pointer[4] == '1') || (pointer[0] == '3' && pointer[4] == '3') || (pointer[0] == '4' && pointer[4] != '1') || (pointer[4] == '4' && pointer[0] != '1'))
		return (1);
	if ((pointer[1] == '1' && pointer[5] == '1') || (pointer[1] == '3' && pointer[5] == '3') || (pointer[1] == '4' && pointer[5] != '1') || (pointer[5] == '4' && pointer[1] != '1'))
		return (1);
	if ((pointer[2] == '1' && pointer[6] == '1') || (pointer[2] == '3' && pointer[6] == '3') || (pointer[2] == '4' && pointer[6] != '1') || (pointer[6] == '4' && pointer[2] != '1'))
		return (1);
	if ((pointer[3] == '1' && pointer[7] == '1') || (pointer[3] == '3' && pointer[7] == '3') || (pointer[3] == '4' && pointer[7] != '1') || (pointer[7] == '4' && pointer[3] != '1'))
		return (1);
	if ((pointer[8] == '1' && pointer[12] == '1') || (pointer[8] == '3' && pointer[12] == '3') || (pointer[8] == '4' && pointer[12] != '1') || (pointer[12] == '4' && pointer[8] != '1'))
		return (1);
	if ((pointer[9] == '1' && pointer[13] == '1') || (pointer[9] == '3' && pointer[13] == '3') || (pointer[9] == '4' && pointer[13] != '1') || (pointer[13] == '4' && pointer[9] != '1'))
		return (1);
	if ((pointer[10] == '1' && pointer[14] == '1') || (pointer[10] == '3' && pointer[14] == '3') || (pointer[10] == '4' && pointer[14] != '1') || (pointer[14] == '4' && pointer[10] != '1'))
		return (1);
	if ((pointer[11] == '1' && pointer[15] == '1') || (pointer[11] == '3' && pointer[15] == '3') || (pointer[11] == '4' && pointer[15] != '1') || (pointer[15] == '4' && pointer[11] != '1'))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	char	*pointer;
	char	pos[16];
	int		a;

	a = 0;
	pointer = &argv[1][0];
	if ((argc != 2) || ((ft_strlen(pointer)) != 31))
		return (1);
	while (*pointer)
	{
		if (*pointer >= '1' && *pointer <= '4')
		{
			pos[a] = *pointer;
			a++;
			pointer++;
			if (*pointer != ' ' && a < 16)
				return (1);
		}
		pointer++;
	}
	pos[a] = '\0';
	if (a != 16)
		return (1);
	pointer = &pos[0];
	if (ft_validete(pointer) == 1)
		return (1);
	a = 0;
	while (pointer[a])
	{
		write(1, &pointer[a], 1);
		a++;
	}
}
