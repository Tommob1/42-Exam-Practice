#include <unistd.h>

void   putchar(char c)
{
    write(1, &c, 1);
}

void    rotone(char *c)
{
    while (*c)
    {
        if ((*c >= 'A' && *c <= 'Y') || (*c >= 'a' && *c <= 'y'))
            putchar(*c + 1);
        else if (*c == 'Z' || *c == 'z')
            putchar(*c - 25);
        else
            putchar(*c);
        ++c;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    putchar('\n');
    return (0);
}
