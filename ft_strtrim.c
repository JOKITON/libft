/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:13:52 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/13 12:24:23 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		num;

	len = ft_strlen(s1);
	while (s1)
	{
		if (ft_strchr(s1[num], set[num]))
			num++;
	}
	if (!pointer == malloc ((size_t)(s1 - (pointer_front + pointer_back))))
		return (NULL);
	return (pointer);
}

/* int	main(void)
{
	char	str1[6] = "21421";
	char	del[2] = "2";

	printf("%s\n", ft_strtrim(str1, del));
	return (0);
} */
