/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:56:01 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/04 10:39:47 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char number)
{
	if (number >= 32 && number <= 126)
	{
		return (1);
	}
	else
		return (0);
}

/* int	main(void)
{
	char	scr = '\n';

	printf("%d\n", ft_isprint(scr));
	printf("%d\n", isprint(scr));
} */
