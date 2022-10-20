#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int     i;
    
    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}

#include<fcntl.h> 
#include <stdio.h>
int main()
{
    int fd = open("foo.txt", O_RDWR | O_CREAT); 
    ft_putstr_fd("selam", fd);
}