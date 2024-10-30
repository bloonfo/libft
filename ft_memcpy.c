/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:17:52 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/17 10:19:45 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_temp;
	char	*src_temp;

	i = 0;
	dest_temp = (char *)dest;
	src_temp = (char *)src;
	while (i < n)
	{
		dest_temp[i] = src_temp[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	char dest[5];
	const char src[] = "salut";
	size_t n = 5;
	ft_memcpy(dest, src + 2, n);
	printf("%s\n", dest);
	char dest1[5];
	const char src1[] = "salut";
	memcpy(dest1, src1 + 2, n);
	printf("%s\n", dest1);
}*/