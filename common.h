#ifndef COMMON_H
#define COMMON_H

#define MAX_USERNAME 50
#define MAX_PASSWORD 50

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char username[MAX_USERNAME];
    char password[MAX_PASSWORD];
} ElType;

#endif