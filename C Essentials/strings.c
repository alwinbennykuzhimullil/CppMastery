// strings are character arrays.

#include <stdio.h>
#include <string.h>

int main(){

    //char message[] = "Hello World";

    char message[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};

    // reasigning value to the string:
    // message == "Alwin"; <- wont work
    strcpy(message, "Hello There");
    printf("%s\n", message);


    // 2.4 string fucntions
    // strcopy = used to rewrite string
    // strcat = used to join strings
    // strlen = used to calculate length of the string excluding the null terminator ('\0')
    char name[20] = "Alwin";
    char last[] = " Benny";
    printf("%s %s\n",name, last);
    strcat(name,last);
    printf("%s is %lu charcters long\n",name,strlen(name));


    // othernote: trace trap in string context happens when a string is reasigned with a another string value
    // thats bigger than char arrray can hold.

    return 0;
}
