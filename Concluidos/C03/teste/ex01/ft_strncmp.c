/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:59:35 by rsiqueir          #+#    #+#             */
/*   Updated: 2021/04/14 01:31:15 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0') && (n > 1))
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
