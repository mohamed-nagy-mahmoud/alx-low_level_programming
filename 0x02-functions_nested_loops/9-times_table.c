#include "main.h"
/**
* times_table - prints the 9 times table
* Description: function that prints the 9 times table, starting with 0
* Return: empty output.
*/

void times_table(void)
{
    int i, j, t;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            t = i * j;

            if (j == 0)
                _putchar('0');
            else if (t < 10)
            {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar(t + '0');
            }
            else
            {
                _putchar(',');
                _putchar(' ');
                _putchar((t / 10) + '0');
                _putchar((t % 10) + '0');
            }
        }
        _putchar('\n');
    }
}



