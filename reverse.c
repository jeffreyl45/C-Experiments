#include <stdio.h>

int main() {
    char array[] = "McMaster";
    char reversed[sizeof(array)/sizeof(char)];
    int count = 0;
    for (int i = sizeof(array)/sizeof(char) - 2; i > -1; i--) {
        reversed[count] = array[i];
        count ++;
    }
    reversed[count] = '\0';
    printf("%s\n", reversed);
}