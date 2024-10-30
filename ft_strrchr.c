/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:36:21 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/17 11:18:59 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*last_occu;

	last_occu = NULL;
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (char)c)
			last_occu = &str[i];
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (last_occu);
}
