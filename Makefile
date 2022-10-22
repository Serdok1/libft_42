$(CC) = gcc
final:
		$(CC) ft_atoi.c ft_bzero.c ft_calloc.c

clean:
		rm *.o final