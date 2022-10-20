#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

#include<fcntl.h> 
#include <stdio.h>
int main()
{
    int fd = open("foo.txt", O_RDWR | O_CREAT); 
    ft_putchar_fd('c', fd);
}