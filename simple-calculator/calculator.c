#include <stdio.h>

/**
 * print_menu - Prints the calculator menu
 */
void print_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}

/**
 * main - Entry point of the simple calculator
 *
 * Return: Always 0
 */
int main(void)
{
	int choice;
	int a, b;

	while (1)
	{
		print_menu();
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
		else if (choice >= 1 && choice <= 3)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				return (1);
			printf("B: ");
			if (scanf("%d", &b) != 1)
				return (1);

			if (choice == 1)
				printf("Result: %d\n", a + b);
			else if (choice == 2)
				printf("Result: %d\n", a - b);
			else
				printf("Result: %d\n", a * b);
		}
		else if (choice == 4)
		{
			/* division will be added in the next task */
		}
		else
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}