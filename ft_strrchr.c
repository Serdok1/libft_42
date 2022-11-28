/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:22:54 by sozbayra          #+#    #+#             */
/*   Updated: 2022/11/28 16:14:36 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	const char	*str;
	unsigned char a = c;

	str = s;
	s = (s + ft_strlen(s));
	while (*s != *str && a != *s)
		s--;
	if (a == *s)
		return ((char *)s);
	return (0);
}
