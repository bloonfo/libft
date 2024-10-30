/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:46:22 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/17 17:47:32 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	j = ft_strlen(s1) + ft_strlen(s2);
	tab = malloc(j + 1);
	i = 0;
	k = 0;
	while (s1[k] && i < j)
	{
		tab[i] = s1[k];
		i++;
		k++;
	}
	k = 0;
	while (s2[k] && i < j)
	{
		tab[i] = s2[k];
		i++;
		k++;
	}
	tab[i] = '\0';
	return (tab);
}
