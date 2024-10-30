/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:39:17 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/22 10:39:46 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_tmp;
	unsigned char	*s2_tmp;

	i = 0;
	s1_tmp = (unsigned char *)s1;
	s2_tmp = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s1_tmp[i] == s2_tmp[i] && s1_tmp[i] && s2_tmp[i] && i < n - 1)
		i++;
	return (s1_tmp[i] - s2_tmp[i]);
}

// #include <stdio.h>
// #include <string.h>
// int main (void)
// {
// 	const char *s1 = NULL;
// 	const char *s2 = "test";
// 	size_t n = 6;
// 	printf("%i\n", ft_strncmp(s1, s2, n));
// 	printf("%i\n", strncmp(s1, s2, n));
// }