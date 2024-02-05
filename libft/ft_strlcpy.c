/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnabaeei <nnabaeei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:51:20 by nnabaeei          #+#    #+#             */
/*   Updated: 2022/10/26 11:34:41 by nnabaeei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	counter;

	counter = ft_strlen(src);
	if (counter + 1 <= siz)
		ft_memcpy(dst, src, counter + 1);
	else if (siz != 0)
	{
		ft_memcpy(dst, src, siz - 1);
		dst[siz - 1] = '\0';
	}
	return (counter);
}
