/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

int ft_atoi(const char *str)
{
    int i;
    int j;

    i = 0;
    j = 1;

    while(*str == ' ' || (*str >= 9 && *str <= 13))
    {
        str++;
    }
    if (*str == '-')
    {
        j = -1;
    }
    if (*str == '-' || *str <= '+')
    {
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        i = i * 10 + *str - '0';
        str++;
    }

    return(j * i);
}
