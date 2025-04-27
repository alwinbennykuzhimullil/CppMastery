#include <stdio.h>

int main(){

    int value = 23;
    int* ptr = &value;
    printf("%i %i\n",value, *ptr);

    value = 10;
    printf("%i %i\n",value, *ptr);

    *ptr = 5;
    printf("%i %i\n",value, *ptr);

    return 0;
}



/*
age - int
&age - int pointer (value)
p - int pointer (variable)
*p - int
*/
