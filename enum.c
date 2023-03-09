#include <stdio.h>

enum PKMN_STATUS {FNT, SLP, PRZ, PSN, FRZ, BRN, None};

int main() {
    enum PKMN_STATUS hello = FNT;
    if (hello == PSN) {
        printf("You are poisoned\n");
    } else if (hello == FNT) {
        printf("Fainted!\n");
    }
    
}