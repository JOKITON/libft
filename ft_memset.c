/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:01:00 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/05 11:48:09 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*content;
	int				number2;
	unsigned char	convert;

	content = (char *)b;
	number2 = 0;
	convert = c - '0';
	while (len > 0)
	{
			content[number2] = convert + '0';
			len--;
			number2++;
	}
	return (content);
}

/* int	main(void)
{
	unsigned char	str[7] = "Buenas";
	size_t			times;

	times = 5;
	ft_memset(str, 77, times);
	printf("%s\n", str);
	memset(str, 77, times);
	printf("%s", str);
	return (0);
} */
