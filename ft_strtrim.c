/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:13:52 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/25 15:49:17 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	num;
	size_t	len;

	num = 0;
	if (!s1 || !set)
		return (NULL);
	len = (ft_strlen(s1));
	while (ft_strchr(set, (char) s1[num]))
	{
		num++;
	}
	while (ft_strchr(set, (char) s1[len]))
	{
		len--;
	}
	return (ft_substr(s1, num, (len - num) + 1));
}
