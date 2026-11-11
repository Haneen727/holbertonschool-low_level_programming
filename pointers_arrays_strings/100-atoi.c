#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer, or 0 if no number is found
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int digit;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (result < INT_MIN / 10 ||
		    (result == INT_MIN / 10 && -digit < INT_MIN % 10))
			return (sign == 1 ? INT_MAX : INT_MIN);

		result = result * 10 - digit;
		i++;
	}

	if (sign == 1)
	{
		if (result == INT_MIN)
			return (INT_MAX);
		return (-result);
	}

	return (result);
}
