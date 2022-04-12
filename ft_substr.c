/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:20:03 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/12 11:47:41 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	sub_len;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	str = (char *)s;
	str = malloc((sizeof(char) * len) + 1);
	if (!str || !s)
	{
		return (NULL);
	}
	sub_len = 0;
	while (str && sub_len < len && start < s_len)
	{
		str[sub_len] = s[start];
		start++;
		sub_len++;
	}
	str[sub_len] = '\0';
	return (str);
}
