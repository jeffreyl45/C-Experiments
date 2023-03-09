#include <stdio.h>
#include <stdbool.h>

int * removeDuplicates(int inputArray[]);


int main() {
    int array[] = {1,2,2,2,3,3,4,2,4,5,6,6};
    int counted[] = removeDuplicates(array);

    for (int i = 0; i < sizeof(counted)/sizeof(int); i++) {
        printf("%d\n", counted[i]);
    }

}
// int * is a pointer
// if you are returning an array the return type must be a pointer
int * removeDuplicates(int inputArray[]) {
    int length = sizeof(inputArray)/sizeof(int);
    int counted[length];
    for (int i = 0; i < length; i ++) {
        counted[i] = 0;
    }

    bool inCounted = false;
    int count = 0;
    for (int i = 0; i < sizeof(inputArray)/sizeof(int); i ++) {
        for (int j = 0; j < sizeof(counted)/sizeof(int); j++) {
            if (inputArray[i] == counted[j]) {
                inCounted = true;
                break;
            }
        
        }
        if (inCounted == false) {
            counted[count] = inputArray[i];
            count = count+1;
        }
        inCounted = false;
    }
    return counted;

}
