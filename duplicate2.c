#include <stdio.h>
#include <stdbool.h>

int main() {
    int array[] = {1,2,0,2,3,3,4,2,4,5,6,6};
    int length = sizeof(array)/sizeof(int);
    int outputArray[length];
    int count = 0;
    bool zero = false;
    bool inList = false;
    for (int i = 0; i < length; i++) {
        outputArray[i] = 0;
    }
    for (int j = 0; j < length; j++) {
        inList = false;
        for (int h = 0; h < length; h++) {
            if (array[j] == outputArray[h]) {
                inList = true;
            }
        }
        if (inList == false) {
            outputArray[count] = array[j];
            count++;
        }
        if (array[j]==0 && zero == false){
            zero = true;
            outputArray[count] = array[j];
            count ++;
        }
        
    }
    for (int i = 0; i < length; i++) {
        printf("%d ", outputArray[i]);
    }
    return 0;

}