/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:42:49 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/07 16:51:03 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int				box;
	unsigned int	loop;

	box = 0;
	loop = 0;
	while (str[loop])
	{
		box = (int)*(str + loop);
		loop++;
	}
	return (box);
}
