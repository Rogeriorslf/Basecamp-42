/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiqueir <rsiqueir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:48:45 by rfelipe-          #+#    #+#             */
/*   Updated: 2021/04/14 23:08:21 by rsiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_size_to_find(char *to_find)
{
	int size;

	size = 0;
	while (to_find[size] != '\0')
		size++;
	return (size);
}

int		ft_strstr2(char *str, char *to_find, int start, int position)
{
	while (to_find[start] != '\0' && str[position] != '\0')
	{
		if (str[position] != to_find[start])
		{
			start = 0;
			break ;
		}
		start++;
		position++;
	}
	return (start);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		start;
	int		position;
	int		size;
	char	*pointer;

	start = 0;
	position = 0;
	pointer = 0;
	size = ft_size_to_find(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[position] != '\0')
	{
		if (str[position] == to_find[start])
		{
			pointer = &str[position];
			start = ft_strstr2(str, to_find, start, position);
			if (start == size)
				return (pointer);
		}
		position++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *str;
	char *to_find;
	char *buff;
	char *ft_buff;

	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galera");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[1] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff);
	else
		printf("[1] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(7, sizeof(char)), "galerA");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff);
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	str = strcpy(calloc(11, sizeof(char)), "alo galera");
	to_find = strcpy(calloc(1, sizeof(char)), "");
	buff = strstr(str, to_find);
	ft_buff = ft_strstr(str, to_find);
	if (buff != ft_buff)
		printf("[2] KO, substrings don't match(expected:%s, got:%s)\n", buff, ft_buff);
	else
		printf("[2] OK. expected: %s result: %s\n", buff, ft_buff);
	return (0);
}