/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:04:21 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/04 10:56:17 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int number)
{
	if (number >= 'a' && number <= 'z')
	{
		return (1);
	}
	else if (number >= 'A' && number <= 'Z')
	{
		return (1);
	}
	else if (number >= '0' && number <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/* int	main(void)
{
	char	scr = '5';

	printf("%d\n", ft_isalnum(scr));
	printf("%d\n", isalnum(scr));
} */
