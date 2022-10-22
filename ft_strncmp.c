/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:22:44 by sozbayra          #+#    #+#             */
/*   Updated: 2022/10/22 15:22:45 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while(str1[i] && str2[i] && n--)
    {
        if(str1 - str2)
            return(str1[i] - str2[i]);
        i++;
    }
    if(n == 0)
        return(str1[i] - str2[i]);
    return(0);
}
