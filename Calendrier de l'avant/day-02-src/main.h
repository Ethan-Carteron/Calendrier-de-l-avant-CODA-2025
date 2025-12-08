#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>

typedef struct Reindeer {
    char *name;
    int present;
} Reindeer;

int countPresentReindeers(Reindeer reindeers[], int total);

#endif