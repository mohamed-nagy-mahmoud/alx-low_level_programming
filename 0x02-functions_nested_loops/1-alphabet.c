#include <stdio.h>
/**
* main- Entry Point
* Description: function that prints the alphabetin lowercase 
* Return: void
*/

void print_alphabet(void) {
    int i;
    for (i = 97; i <= 122; i++) {
        _putchar(i);
    }
    _putchar('\n');
}
