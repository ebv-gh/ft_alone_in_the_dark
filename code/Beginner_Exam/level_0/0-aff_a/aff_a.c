#include <unistd.h>

int main (int ac, char *av[])
{
	int i;

	if (ac != 2)
		return (write(1, "a\n", 2));
	else
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] == 'a')
				return (write(1, "a\n", 2));
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}

// 1 .Write a program that takes a string, and displays the first 'a' character it encounters in it, followed by a newline. 
// 2. If there are no 'a' characters in the string, the program just writes a newline. 
// 3. If the number of parameters is not 1, the program displays 'a' followed by a newline.


