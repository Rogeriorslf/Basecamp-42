/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avictor- <avictor-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:57:52 by avictor-          #+#    #+#             */
/*   Updated: 2021/04/15 12:40:09 by avictor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	while (s1[pos] != '\0' || s2[pos] != '\0')
	{
		if (s1[pos] > s2[pos] || s1[pos] < s2[pos])
		{
			return (((unsigned char)s1[pos]) - ((unsigned char)s2[pos]));
		}
		pos++;
	}
	return (0);
}
