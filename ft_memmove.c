/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:38:31 by sozbayra          #+#    #+#             */
/*   Updated: 2022/10/08 22:47:31 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest1;
	char	*src1;

	dest1 = (char *)dst;
	src1 = (char *)src;
	if (dest1 > src1)
		while (len--)
			dest1[len] = src1[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
