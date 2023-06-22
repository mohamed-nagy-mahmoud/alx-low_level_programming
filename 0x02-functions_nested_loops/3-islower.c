#include <stdio.h>
/**
* main- check if character is lowercase
* Description: function that checks for lowercase character 
* Return: always 0
*/

int _islower(int ch) 
{
    if (ch >= 'a' && ch <= 'z') 
        return 1;  
     else 
        return 0;      
}
