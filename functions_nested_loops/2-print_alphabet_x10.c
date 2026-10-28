#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void
 */
{
       int line;
       char letter;
       while (line < 10)
{
       letter = 'a';

       while (letter <= 'z')
    {
        _putchar(letter);
        line++;
    }

    _putchar('\n');
}
