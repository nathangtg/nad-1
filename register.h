#ifndef REGISTER_H
#define REGISTER_H

#include "common.h" 

typedef struct {
    ElType *buffer; 
    int length;     
    int capacity;   
} Pasien;

Pasien Register(Pasien pasien, ElType *N);

#endif 