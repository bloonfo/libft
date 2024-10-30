/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:29:23 by matgalla          #+#    #+#             */
/*   Updated: 2024/10/17 17:47:07 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_num(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*ft_nmin(int n)
{
	char	*tab;
	int		i;
	int		k;

	i = 10;
	tab = malloc(12 * sizeof (char));
	if (!tab)
		return (NULL);
	tab[0] = '-';
	tab[1] = '2';
	n = 147483648;
	k = ft_len_num(n);
	while (k > 0)
	{
		tab[i] = n % 10 + 48;
		n /= 10;
		i--;
		k--;
	}
	tab[11] = '\0';
	return (tab);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;
	int		k;
	int		j;

	if (n == -2147483648)
		return (ft_nmin(n));
	k = ft_len_num(n);
	j = n;
	tab = malloc(k * sizeof(char) + 1);
	if (!tab)
		return (NULL);
	i = k - 1;
	if (n < 0)
		n *= -1;
	while (k-- > 0)
	{
		tab[i--] = (n % 10) + 48;
		n /= 10;
	}
	if (j < 0)
		tab[0] = '-';
	tab[ft_len_num(j)] = '\0';
	return (tab);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	int n = 2147483647;
// 	printf("%s\n", ft_itoa(n));
// }