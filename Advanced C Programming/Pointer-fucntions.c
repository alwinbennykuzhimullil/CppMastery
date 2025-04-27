#include <stdio.h>

void modifyData(int* data){
    *data = 9000;
}

int main(){

    int age = 5;
    modifyData(&age);
    printf("%i\n",age);

    return 0;
}


// Passing Pointers to Functions
// This has two benefits:
// It can allow the function to modify data defined outside of the function
// It can save memory so data is not copied. This is more valuable when working with custom
