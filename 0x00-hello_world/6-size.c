#include <stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
 */
int main(void)
{
		char c;
			int i;
				long b;
					long long d;
						float f;

							printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
								printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
									printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
										printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
											printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
												return (0);
}
