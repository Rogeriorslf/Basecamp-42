/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kapereir <kapereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 01:45:02 by kapereir          #+#    #+#             */
/*   Updated: 2021/04/16 01:50:19 by kapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] < 'a' || str[c] > 'z')
		{
			return (0);
		}
		c++;
	}
	return (1);
}
