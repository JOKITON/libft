/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dani.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:45:28 by jaizpuru          #+#    #+#             */
/*   Updated: 2022/04/07 15:45:30 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char 	*ar_1;
	unsigned char 	*ar_2;
	unsigned int	result;
	size_t  		loop;

	ar_1 = (unsigned char *)s1;
	ar_2 = (unsigned char *)s2;
	loop = 0;
	result = 0;
	while(loop < n)
	{
	if (ar_1[loop] != ar_2[loop] && ar_1 && ar_2)
	{
		result = (ar_1[loop] - ar_2[loop]);
		return (result);
	}
	loop++;
	}
	return (result);
	}

/* int main(void)
{
  char s1[9] = "00000100";
  char s2[9] = "00000g00";
  size_t number = 7;

  printf("%d", ft_memcmp(s1, s2, number));
  return (0);
} */
