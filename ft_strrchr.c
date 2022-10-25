/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:22:54 by sozbayra          #+#    #+#             */
/*   Updated: 2022/10/25 18:33:46 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	s = (s + ft_strlen(s));
	while (*s != *str && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
