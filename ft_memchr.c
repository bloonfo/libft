/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:05:49 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/17 10:24:34 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tab;
	size_t			i;

	tab = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tab[i] == (unsigned char) c)
			return ((void *)&tab[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	const char s[] = "sdfs";
// 	int c = 'f';
// 	char *res = ft_memchr(s ,c ,4);
// 	printf("%s\n", res);
// }
