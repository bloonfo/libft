/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:11:55 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/18 09:25:25 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*tab;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	tab = malloc (ft_strlen(s) + 1);
	if (!tab)
		return (NULL);
	ft_strlcpy (tab, s, ft_strlen(s) + 1);
	while (s[i])
	{
		tab[i] = (*f)(i, tab[i]);
		i++;
	}
	return (tab);
}
