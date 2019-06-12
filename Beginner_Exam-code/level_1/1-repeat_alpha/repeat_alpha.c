#include <unistd.h>

int ft_is_letter(char c)
{
   if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
   {
       return (1);
   }
   else 
   {
       return (0);
   }
}

int ft_is_upper(char c)
{
    if(ft_is_letter(c))
    {
        return (c >= 'A' && c <= 'Z' ? 1 : 0);
    }
    return (0);
}

int main(int argc, char const *argv[])
{
    int i;
    int repeat;
    char const *str;

    str = argv[1];

    if (argc != 2)
    {
        return (write(1, "\n", 1));
    }
    else
    {
        i = 0;
        while (str[i])
        {
            if (ft_is_letter(str[i]))
            {
                repeat = ft_is_upper(str[i]) ? str[i] - 'A' : str[i] - 'a';
                if (repeat == 0)
                {
                    write (1, &str[i], 1);
                }
                else if (repeat > 0)
                {
                    repeat += 1;
                    while (repeat)
                    {
                        write (1, &str[i], 1);
                        repeat--;
                    }
                }
            }
            else
            {
                write (1, &str[i], 1);
            }
            i++;
        }
    }
    return 0;
}
