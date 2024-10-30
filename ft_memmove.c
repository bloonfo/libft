/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:21:15 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/15 15:11:59 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*temp_src;
	char	*temp_dest;
	size_t	i;

	temp_src = (char *)src;
	temp_dest = (char *)dst;
	i = 0;
	if (temp_dest > temp_src)
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	else
	{
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[8] = "Bonjour";
	char dest[8] = "salutttt";
	memmove(dest, str, 5);
	printf("vraie fonction : %s\n", dest);
	char str1[8] = "Bonjour";
	char dest1[8] = "salutttt";
	ft_memmove(dest1, str1, 5);
	printf("ma fonction : %s\n", dest1);
}*/
