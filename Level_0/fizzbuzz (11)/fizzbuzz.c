/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

*/

#include <unistd.h>

void    printnums(int nums)
{
    char str[10] = "0123456789";

    if (nums > 9)
    {
        printnums(nums / 10);
    }
    write(1, &str[nums % 10], 1);
}

int main(int argc, char **argv)
{
    int i;
    i = 1;

    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            printnums(i);
        i++;
        write(1, "\n", 1);
    }
    return (0);
}
