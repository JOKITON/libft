/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:17:43 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/05 14:03:42 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		len_dst;
	size_t		len_src;
	size_t		i;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst + 1)
	{
		return (len_src + dstsize);
	}
	while (len_dst + i + 1 < dstsize && src[i] != '\0')
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

/* int	main(void)
{
	char		dst[7] = "Buenas";
	const char	src[10] = "Tardestrw";
	size_t		size;

	size = 19;
	printf("Resultado de Ejercicio Local:\n");
	ft_strlcat(dst, src, size);
	printf("%s\n", dst);
	return (0);
} */
