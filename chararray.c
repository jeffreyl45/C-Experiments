#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter a string\n");
    char foo[14];
    // do not need & to address an array, only needed for int, float etc.
    scanf("%14s", foo);
    // strlen gets rid of the \0 at the end of strings
    printf("%d\n", strlen(foo));
    printf("%d\n", sizeof(foo)/sizeof(foo[0]));
}