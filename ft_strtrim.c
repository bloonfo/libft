/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:15:50 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/18 10:13:32 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_trim(char const *s1, char const *set, int i)
{
	int	k;

	k = ft_strlen(set);
	if (i == 0)
		return (k);
	if (s1[i + k] != '\0')
		return (0);
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tab;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	tab = malloc (ft_strlen(s1) * sizeof(char) + 1);
	if (!tab)
		return (NULL);
	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == set[j] && set[j] != '\0')
			j++;
		if (set[j] == '\0')
			i += is_trim(s1, set, i);
		tab[k] = s1[i];
		k++;
		i++;
	}
	tab[k] = '\0';
	return (tab);
}

// #include <stdio.h>
// int main(void)
// {
// 	char const *s1 = "  sf s df s df    ";
// 	char const *set = " ";
// 	printf(",%s,", ft_strtrim(s1, set));
// 	return (0);
// }
