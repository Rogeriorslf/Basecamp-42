/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 22:26:50 by ealves-d          #+#    #+#             */
/*   Updated: 2021/04/16 01:05:40 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*p;
	int		i;
	int		j;

	j = 0;
	i = 0;
	p = str;
	if (to_find[0] == '\0')
		return (p);
	while (p[i])
	{
		j = 0;
		while (p[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (p + i);
			j++;
		}
		i++;
	}
	return (0);
}
