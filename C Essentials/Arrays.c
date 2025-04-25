//
#include <stdio.h>

int main(){

    int grades[10];         // here 10 is the size of the array
    // here gardes array have garbage values
    int scores[] = {2,4,6}; // here 3 is the size of the array

    int runs[10] = {2,4,6};
    // here when array is initalised with less values than specified size. the rest is initailsed to 0.
    // int runs[10] = {0}; <- here everything is 0.
    //
    // Note: To seprate actual values from garbage value, we could also keep track using another grade_count variable
    //
    //
    // Other:
    // int grades[10] = {0}; <- Higher performance overhead, safer
    // int grades[10];       <- faster

    grades[0] = 1; // Can assign value using index
    grades[1] = 3;

    printf("%i\n", grades[0]);
    printf("%i\n", grades[1]);

    return 0;
}
