/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapereir <kapereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 02:07:52 by kapereir          #+#    #+#             */
/*   Updated: 2021/04/16 02:08:46 by kapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] < 32 || str[count] > 126)
			return (0);
		count++;
	}
	return (1);
}
