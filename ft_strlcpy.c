/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:20:34 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/06 10:39:04 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	length;

	length = dstsize;
	while (dstsize - 1 >= 0 && dst[dstsize] != '\0')
	{
		dst[dstsize] = src[dstsize];
		dstsize--;
	}
	dst[length - 1] = '\0';
	return (length);
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
