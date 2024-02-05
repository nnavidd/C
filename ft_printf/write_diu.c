/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_diu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navid <navid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:29:31 by nnabaeei          #+#    #+#             */
/*   Updated: 2024/02/05 06:59:13 by navid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_diu(int *i, const char *ptr, va_list ap)
{
	int	j;

	j = 0;
	if (*ptr == 'd')
		ft_putnbr(i, va_arg(ap, int));
	else if (*ptr == 'i')
		ft_putnbr(i, va_arg(ap, int));
	else if (*ptr == 'u')
		ft_putnbru(i, va_arg(ap, unsigned int), "0123456789");
	j++;
	return (j);
}
