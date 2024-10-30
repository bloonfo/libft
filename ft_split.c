/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:35:48 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/17 18:08:50 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_free(char **tab)
{
	int	j;

	j = 0;
	while (tab[j])
	{
		j = 0;
		while (tab[j])
		{
			free(tab[j]);
			j++;
		}
	}
	free (tab);
	return (NULL);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	if (s[0] == c || s[0] == '\0')
		count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i] != '\0')
				count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_alloctab(char const *s, char c)
{
	int		i;
	char	*tab;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] && s[i] != c)
		i++;
	tab = malloc((i + 1) * sizeof(char));
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc ((ft_count_words(s, c) + 1) * sizeof (char *));
	if (!tab)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		tab[j] = ft_alloctab(&s[i], c);
		if (!tab[j])
			return (ft_free(tab));
		k = 0;
		while (s[i] != c && s[i])
			tab[j][k++] = s[i++];
		while (s[i] == c && s[i])
			i++;
		tab[j++][k] = '\0';
	}
	return (tab[j] = NULL, tab);
}

// int main(void)
// {
// 	char const *s = " Tripouille";
// 	char c = ' ';
// 	int i = 0;
// 	char **tab = ft_split(s, c);
// 	while (tab[i])
// 	{
// 		printf(",%s,\n", tab[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (tab[i])
// 	{
// 		free (tab[i]);
// 		i++;
// 	}
// 	free (tab);
// 	return (0);
// }