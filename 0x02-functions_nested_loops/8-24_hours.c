#include "main.h"
/**
 * jack_bauer - write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * @a:  the letter being used
 * Return: Always 0 Success
 */
void jack_bauer(void)
{
	int  hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 59; minute++)
		{
			_putchar((hour / 10) + '0');
		       _putchar((hour % 10) + '0');
	       _putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
return (0);
		}
	}
}
