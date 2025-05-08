#ifndef LOGIN_H
#define LOGIN_H

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

// typedef struct {
//     ElType *buffer; 
//     int length;     
//     int capacity;   
// } Pasien;

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

bool UsernameAvailable(ElType*N, ElType *M);

bool RightPassword(ElType*N, ElType*M);

int IsPasienRegistered(Pasien pasien, ElType *N);

int IsDokterRegistered(Dokter dokter, ElType *N);

int IsManajerRegistered(Manajer manajer, ElType *N);

void PrintAkun(Pasien pasien, Dokter dokter, Manajer manajer,ElType *N );

#endif