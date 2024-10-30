/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:30:28 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/15 15:12:49 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int c = 'a';
	printf("%i\n", ft_toupper(c));
	printf("%i\n", toupper(c));
	return (0);
}*/