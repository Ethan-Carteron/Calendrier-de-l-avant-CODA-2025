#include <stdio.h>
#include <string.h>
#include "main.h"

int countPresentReindeers(Reindeer reindeers[], int total) {
    int present = 0;
    for (int i = 0; i < total; i++) {
        if (reindeers[i].present) {
            present++;
        }
    }
    return present;
}

int main(void) {
    Reindeer reindeers[] = {
        {"Dasher", 1},
        {"Dancer", 1},
        {"Prancer", 0},
        {"Vixen", 1},
        {"Comet", 0},
        {"Cupid", 1},
        {"Donner", 1},
        {"Blitzen", 1},
        {"Rudolph", 1}
    };

    int total = sizeof(reindeers) / sizeof(reindeers[0]);
    int present = countPresentReindeers(reindeers, total);

    printf("🎅 Santa: %d out of %d reindeers are present in the stable tonight.\n", present, total);
    return 0;
}