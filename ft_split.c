/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:20:06 by sozbayra          #+#    #+#             */
/*   Updated: 2022/10/20 16:30:30 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     len(char const *s, char c)
{
    int i;

    i = 0;
    while (s[i] != c)
    {
        i++;
    }
    return(i);
}

char    **ft_split(char const *s, char c)
{
    char *s2;
    int i;
    int j;
    
    i = 0;
    j = 0;
    s2 = malloc(sizeof(*s2) * len(s, c));
    while(s[i] != c)
    {
        i++;
    }
    while(j <= i)
    {
        s2[j] = s[j];
        j++;
    }
    return (s2);
}

#include <stdio.h>
int main()
{
    char s[] = "japan";
    printf("%s", ft_split(s, "p"));
}	