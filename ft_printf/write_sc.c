/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_sc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navid <navid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:32:25 by nnabaeei          #+#    #+#             */
/*   Updated: 2024/02/05 06:59:07 by navid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_sc(int *i, const char *ptr, va_list ap)
{
	int	j;

	j = 0;
	if (*ptr == 's')
		*i += ft_putstr(va_arg(ap, char *));
	else if (*ptr == 'c')
		ft_putchar(i, va_arg(ap, int));
	j++;
	return (j);
}
