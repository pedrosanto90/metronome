#include <stdio.h>
#include <unistd.h>

int main(void) {
    float tempo = 120;
    float division = 4;

    float markTempo = 60 / tempo * 1000000;
    int c = 0;
    while(c < 5) {
        for(int i = 1; i <= division; i++) {
            printf("%i\n", i);
            usleep(markTempo);
        }
        c++;
    }
}
