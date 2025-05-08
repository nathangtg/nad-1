#ifndef LOGIN_H
#define LOGIN_H

#include "common.h"  
#include "register.h"  

typedef struct {
    ElType *buffer; 
    int length;     
    int capacity;   
} Dokter;

typedef struct {
    ElType data; 
} Manajer;

Pasien CreatePasien(int length, int capacity);

Dokter CreateDokter(int length, int capacity);

Manajer CreateManajer(ElType data);

void FreePasien(Pasien *pasien); 

void FreeDokter(Dokter *dokter);

bool UsernameAvailable(ElType *N, ElType *M);

bool RightPassword(ElType *N, ElType *M);

int IsPasienRegistered(Pasien pasien, ElType *N);

int IsDokterRegistered(Dokter dokter, ElType *N);

int IsManajerRegistered(Manajer manajer, ElType *N);

void PrintAkun(Pasien pasien, Dokter dokter, Manajer manajer, ElType *N);

#endif