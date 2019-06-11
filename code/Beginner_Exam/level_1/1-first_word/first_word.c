#include <unistd.h>

int ft_len(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return (i);
}

int main(int argc, char *argv[])
{
    int i;
    int len;

    len = ft_len(argv[1]);

    if (argc != 2)
        write (1, "\n", 1);
    else
    {
        if 
    }
    
    return 0;
}
