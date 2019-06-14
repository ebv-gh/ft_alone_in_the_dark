#include <unistd.h>

int ft_str_len(char const *str)
{
    char const *end = str;

    while (*end)
    {
        end++;
    }
    return (end - str);
}

int ft_is_space(char c)
{
    return ((c == ' ') || (c == '\t') ? 1 : 0);
}

int main(int argc, char const *argv[])
{
    char const *str;

    str = argv[1];

    if (argc != 2)
    {
        write(1, "\n", 1);
    }
    else
    {
        if (!(ft_str_len(str)))
        {
            write(1, "\n", 1);
        }
        else
        {
            while (*str)
            {
                if (ft_is_space(*str))
                {
                    str++;
                }
                else
                {
                    write(1, &*str, 1);
                    str++;
                    if (ft_is_space(*str))
                    {
                        break;
                    }
                }
            }
            write(1, "\n", 1);
        }
        
    }
    return 0;
}
