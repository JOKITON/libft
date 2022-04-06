/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:38:53 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/04 10:40:07 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int number)
{
	if (number >= 0 && number <= 127)
	{
		return (1);
	}
	else
		return (0);
}

/*
int	main(void)
{
	int	scr = 127;

	printf("%d\n", ft_isascii(scr));
	printf("%d\n", isascii(scr));
} */
