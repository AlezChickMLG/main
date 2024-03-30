#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd, output;
	char numeFisier[21];
	char buffer[20];
	ssize_t nr;
	
	printf("Citeste numele fisierului\n");
	fgets(numeFisier, 20, stdin);
	numeFisier[strlen(numeFisier) - 1] = '\0';
	
	fd = open(numeFisier, O_RDONLY, O_FSYNC);
	if (fd == -1)
	{
		perror(numeFisier);
		exit(EXIT_FAILURE);
	}
	
	output = open("afisare.out", O_WRONLY);
	if (output == -1)
	{
		perror("afisare.out");
		exit(EXIT_FAILURE);
	}
		
	nr = read(fd, buffer, 20);
	write(output, buffer, nr);
	
	close(fd);
	close(output);

	return 0;
}
