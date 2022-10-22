/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozbayra <sozbayra@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:33:24 by sozbayra          #+#    #+#             */
/*   Updated: 2022/10/22 15:22:39 by sozbayra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  int   i;
  char  *s2;

  i = 0;
  while(s[i])
  {
    i++;
  }
  s2 = (char *)malloc(i + 1);
  if (!s2)
		return (0);
  i = 0;
  while(s[i])
  {
    s2[i] = (*f)(i, s[i]);
    i++;
  }
  s2[i] = 0;
  return (s2);
}
/* 
#include <stdio.h>
char my_func(unsigned int i, char str)
{
 	printf("My inner function: index = %d and %c\n", i, str);
 	return str - 32;
}

int main()
{
    char str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
 	printf("The result is %s\n", result);
 	return 0;
} */