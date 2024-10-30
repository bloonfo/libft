/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:50:19 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/22 10:52:50 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	i;
	size_t	total_len;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total_len = size * nmemb;
	if (total_len / nmemb != size)
		return (NULL);
	tab = malloc(total_len);
	if (!tab)
		return (NULL);
	while (i < total_len)
	{
		((unsigned char *)tab)[i] = 0;
		i++;
	}
	return (tab);
}
// #include <stdio.h>
// int main(void)
// {
// 	size_t nmemb = 30;
// 	size_t size = 1;
// 	size_t i = 0;
// 	size_t *tab;
// 	tab = (char *)ft_calloc(nmemb, size);
// 	while (i < size)
// 	{
// 		printf("%zu ", tab[i]);
// 		i++;
// 	}

// }
