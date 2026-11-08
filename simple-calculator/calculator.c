#include <stdio.h>

void print_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}


int main(void)
{
	int choice;
	double a, b;

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
		else if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
				return (1);
			printf("B: ");
			if (scanf("%lf", &b) != 1)
				return (1);

			if (choice == 1)
				printf("Result: %.15g\n", a + b);
			else if (choice == 2)
				printf("Result: %.15g\n", a - b);
			else if (choice == 3)
				printf("Result: %.15g\n", a * b);
			else if (b == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %.15g\n", a / b);
		}
		else
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}