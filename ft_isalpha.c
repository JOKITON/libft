/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:32:26 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/04 10:40:06 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int number)
{
	if (number >= 'a' && number <= 'z')
	{
		return (1);
	}
	else if (number >= 'A' && number <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

/*
int	main(void)
{
	char	scr = 'f';

	printf("%d\n", ft_isalpha(scr));
	printf("%d\n", isalpha(scr));
} */
