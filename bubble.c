#include <stdio.h>

int main() {
    int array[] = {548,845,731,258,809,522,73,385,906,891,988,289,808,128};
    int n = sizeof(array)/sizeof(array[0]);
    int swapcount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swapcount++;
            }

        }

    }
    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }
    printf("SwapCount: %d\n", swapcount);
    return 0;
}