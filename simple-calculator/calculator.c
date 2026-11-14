#include <stdio.h>

/**
 * display_menu - Affiche les options de la calculatrice
 */
void display_menu(void)
{
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choose an option: ");
}

/**
 * main - Point d'entree du programme
 *
 * Return: 0 en cas de succes
 */
int main(void)
{
	int choice = -1;
	int status;

	printf("Simple Calculator\n");

	while (choice != 0)
	{
		display_menu();
		status = scanf("%d", &choice);

		if (status != 1)
		{
			while (getchar() != '\n')
				;
			choice = -1;
			printf("Invalid input.\n");
			continue;
		}

		if (choice == 0)
		{
			printf("Goodbye!\n");
		}
		else if (choice >= 1 && choice <= 4)
		{
			printf("Option %d selected.\n", choice);
		}
		else
		{
			printf("Invalid option.\n");
		}
	}

	return (0);
}
