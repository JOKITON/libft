/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:40:20 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/05 11:52:13 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*content;
	size_t	number2;

	content = (char *)s;
	number2 = 0;
	while (n > number2)
	{
		content[number2] = 0;
		number2++;
	}
}

/* int	main(void)
{
	unsigned char	scr[] = "Buenas Tardes";
	size_t			n;

	n = 2;
	ft_bzero(scr, n);
	printf("%s\n", scr);
	bzero(scr, n);
	printf("%s\n", scr);
} */
