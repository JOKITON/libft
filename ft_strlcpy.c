/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:20:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/06 11:17:10 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	length;

	length = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (dstsize - 1 > length && src[length])
	{
		dst[length] = src[length];
		length++;
	}
	dst[length] = '\0';
	return (ft_strlen(src));
}

/* int	main(void)
{
	char		dst[7] = "Buenas";
	const char	src[7] = "Tardes";
	size_t		size;

	size = 5;
	ft_strlcpy(dst, src, size);
	printf("%s\n", dst);
	return (0);
} */
