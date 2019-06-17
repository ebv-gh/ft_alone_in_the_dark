#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        i++;
    }
    return (i);
}
int main(int argc, char const *argv[])
{
    char const *str;
    char const *ptr;

    str = argv[1];
    ptr = str;

    if (argc != 2)
    {
        write (1, "\n", 1);
    }
    else
    {
        while (*ptr)
        {
            ptr++;
        }
        ptr--;
        while (str <= ptr)
        {
            write (1, &*ptr--, 1);
        }
        write (1, "\n", 1);
    }
    return 0;
}
