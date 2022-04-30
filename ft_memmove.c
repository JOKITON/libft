/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:20:09 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/07 16:38:41 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*content_src;
	char	*content_dst;
	size_t	loop;

	loop = 0;
	content_src = (char *)src;
	content_dst = (char *)dst;
	if (dst > src)
	{
		while (len--)
		{
			content_dst[len] = content_src[len];
		}
	}
	else if (src > dst)
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
