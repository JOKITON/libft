/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:13:52 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/12 14:46:18 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mod;
	char	*del;
	int		line;
	int		s;

	mod = (char *) s1;
	del = (char *) set;
	line = 0;
	s = 0;
	while (mod[line])
	{
		if (mod[line - s] == del[line - s])
		{
			mod[line] = mod [line + 1];
			s = s + 1;
			line++;
		}
		else
			s++;
	}
	mod[line - s] = '\0';
	return (mod);
}

int	main(void)
{
	char	str1[6] = "11111";
	char	del[2] = " ";

	printf("%s\n", ft_strtrim(str1, del));
	return (0);
}
