#include <unistd.h>

void    print_bits(unsigned char octet)
{
	int i;
	int k;

	k = 8;
	i = 128;
	while (k > 0)
	{
		if (octet >= i)
		{
			if (octet % i > 0 || octet == i)
			{
				write (1, "1", 1);
				octet=octet - i;
			}

		}
		else
			write (1, "0", 1);
		if (i / 2 == 0)
			i = 1;
		else
			i /= 2;
		k--;
	}
}


int main(void)
{
	print_bits(255);
}
