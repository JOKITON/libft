/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 15:09:32 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/28 13:17:18 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_substr(const char*str, char chr)
{
	int		res;
	int		string_len;

	string_len = 0;
	res = 0;
	while (str[string_len])
	{
		if ((char)str[string_len] == chr)
		{
			++res;
		}
		string_len++;
	}
	return (res);
}

char	*array_factory(const char *string, int start, int finish)
{
	int		pos;
	char	*num_str;

	num_str = malloc((finish - start + 1) * sizeof(char));
	if (!num_str)
		return (0);
	pos = 0;
	while (finish > start)
	{
		num_str[pos++] = string[start++];
	}
	num_str[pos] = '\0';
	return (num_str);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	len;
	int		num;
	size_t	s_len;

	num = -1;
	len = 0;
	s_len = 0;
	result = malloc(sizeof(char) * count_substr(s, c));
	if (!s || !(result))
		return (0);
	while (ft_strlen(s) >= s_len)
	{
		if (s[s_len] != c && num < 0)
			num = s_len;
		if (s[s_len] == c && num >= 0)
		{
			result[len++] = array_factory(s, num, s_len);
			num = -1;
		}
	s_len++;
	}
	result[len] = 0;
	return (result);
}
/*
int	main(void)
{
	const char	str[42] = {"Buenas Tardes Buenas Noches Malas Tardes!"};
	char		**result_2 = ft_split(str, ' ');
	int			number;

	number = 0;
	while (number <= 8)
	{
		printf("String numero %d en el array: %s\n",
			number, *(result_2 + number));
		number++;
	}
	return (0);
} */

/* int main(void)
{
	long long	*p;

	*p = 10;
	printf("Direccion de memoria de p: %llu\n", p);
	printf("Direccion de memoria siguiente a p: %llu\n", p + 1);
	printf("Direccion de memoria siguiente siguiente a p: %llu\n", p + 2);
	printf("Valor del valor apuntado por p: %d\n", *p);
	printf("Valor dela longitud de long long: %llu\n", sizeof(long long));
	return (0);
} */
