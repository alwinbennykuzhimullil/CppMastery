#include <stdio.h>

typedef struct {
    int x;
    int y;
} Position;

int main() {
    Position location = {5, 10};
    Position* start = &location;

    printf("(%i, %i)\n", (*start).x, (*start).y);
    // Here we are dereferencing the pointer called start

    printf("(%i, %i)\n", start->x, start->y);
    // The process of dereferencing a struct pointer and accessing a member is so common in C,
    // so much so that there is an operator to do just that, and it looks like ->.
    // Whenever you see an arrow you’ll know you’re working with a pointer and you’re trying to
    // dereference and access a member.

    return 0;
}
