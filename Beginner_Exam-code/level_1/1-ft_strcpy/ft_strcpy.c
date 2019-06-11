char *ft_strcpy(char *dst, const char *src) {
	while ((*dst++=*src++));
	return (dst);
};

#include <string.h>
#include <stdio.h>

int main(void) {
	char str[] = "testing";
	char tmp[20];
	char tmp2[20];
	int pmt = 0;
	int pmt2 = 0;

	strcpy(tmp, str);
	ft_strcpy(tmp2, str);

	pmt = strlen(tmp);
	pmt2 = strlen(tmp2);

	printf("sys strcpy: %s\n", tmp);
	printf("tmp lenght: %d\n", pmt);
	printf("my strcpy: %s\n", tmp2);
	printf("tmp2 lenght: %d\n", pmt2);
}
