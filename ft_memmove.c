/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:20:09 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/05 12:50:56 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*content;
	char	*content2;
	size_t	loop;

	loop = 0;
	content = (char *)src;
	content2 = (char *)dst;
	while (len > loop)
	{
		content2[loop] = content[loop];
		loop++;
	}
	return (dst);
}

/* int	main(void)
{
	unsigned char		str[7] = "Buenas";
	unsigned const char	str2[7] = "Tardes";
	size_t				times;

	times = 3;
	ft_memmove(str, str2, times);
	printf("%s", str);
	return (0);
} */
