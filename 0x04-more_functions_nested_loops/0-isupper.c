#include "holberton.h"
/**
* _isupper -checks for uppercase character.
*/


int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z'){
        // _putchar('print this');
        return (1);
    }
    else{
        return (0);
    }

}
