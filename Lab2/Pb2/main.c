#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int i, input, fisier;
	ssize_t nr;
	char buffer[20];
	
	fisier = open(argv[1], O_WRONLY | S_IWRITE);
	if (fisier == -1)
	{
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}
	
	for(i = 2;i <= argc;i++)
	{
		input = open(argv[i], O_RDONLY | S_IREAD);
		if (input == -1)
		{
			perror(argv[i]);
			exit(EXIT_FAILURE);
		}
		
		nr = read(input, buffer, 20);
		
		while ((nr = read(input, buffer, 20)) > 0)
		{
			write(fisier, buffer, nr);
		}
		close(input);
	}
	
	close(fisier);
	return 0;
}
