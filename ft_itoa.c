/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:04:53 by nnabaeei          #+#    #+#             */
/*   Updated: 2022/11/11 15:43:27 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	length(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static	char	*make_func(int n, int sign)
{
	int		size;
	char	*s;

	size = length(n);
	s = malloc((sign + size + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[size + sign] = '\0';
	while (size > 0)
	{
		s[--size + sign] = n % 10 + '0';
		n /= 10;
	}
	if (sign > 0)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	int	sign;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	return (make_func(n, sign));
}
