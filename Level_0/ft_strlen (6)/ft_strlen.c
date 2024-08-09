/*
Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);
*/

int ft_strlen(char *str)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while (str[i] != '\0')
    {
        j += 1;
        i++;
    }
    return (j);
}
