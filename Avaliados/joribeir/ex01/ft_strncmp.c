/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 03:25:07 by joribeir          #+#    #+#             */
/*   Updated: 2021/04/15 05:14:54 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int charcount;

	charcount = 0;
	if(n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && charcount < n)
	{
		s1++;
		s2++;
		charcount++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);

}

#include <stdio.h>
int main(void)
{
	unsigned int n;
	char*s1 = "teste";
	char*s2 ="tesda";
	n = 3;
	printf("%i", ft_strncmp(s1, s2, n));
}

