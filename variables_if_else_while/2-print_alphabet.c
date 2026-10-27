#include <stdio.h>

/**
 * main – Affiche l'alphabet en minuscules 
 *
 * Retour : Toujours 0
 */
int main(void)
{
    char letter;

    letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    putchar('\n');

    return (0);
}
