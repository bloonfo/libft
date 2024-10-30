/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:06:33 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/17 09:15:16 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tab;

	i = 0;
	tab = malloc(ft_strlen(s) - start * sizeof(char const) + 1);
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = s[start];
		i++;
		start++;
	}
	tab[i] = '\0';
	return (tab);
}

/*#include <stdio.h>
int main(void)
{
	char const *s = "maison rigolote";
	unsigned int start = 7;
	size_t len = 9;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/
