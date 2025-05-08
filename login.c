#include "login.h"
#include "register.h"

Pasien CreatePasien(int length, int capacity) {
    Pasien pasien;
    pasien.buffer = (ElType *)malloc(capacity * sizeof(ElType));
    if (pasien.buffer == NULL) {
        printf("Memory allocation failed\n");
        pasien.length = 0;
        pasien.capacity = 0;        
    }
    pasien.length = length;
    pasien.capacity = capacity;
    return pasien;
}
Dokter CreateDokter(int length, int capacity) {
    Dokter dokter;
    dokter.buffer = (ElType *)malloc(capacity * sizeof(ElType));    
    if (dokter.buffer == NULL) {
        printf("Memory allocation failed\n");
        dokter.length = 0;
        dokter.capacity = 0;        
    }
    dokter.length = length;
    dokter.capacity = capacity;
    return dokter;
}
Manajer CreateManajer(ElType data) {
    Manajer manajer;
    manajer.data = data;    
    return manajer;
}
void FreePasien(Pasien *pasien) {
    free(pasien->buffer);
    pasien->buffer = NULL;
    pasien->length = 0;
    pasien->capacity = 0;
}   
void FreeDokter(Dokter *dokter) {
    free(dokter->buffer);
    dokter->buffer = NULL;
    dokter->length = 0;
    dokter->capacity = 0;
}

bool UsernameAvailable(ElType*N, ElType*M){
    return (strcmp(N->username, M->username)==0);
}

bool RightPassword(ElType*N, ElType*M){
    return(strcmp(N->password,M->password)==0);
}

void IsRegistered(Dokter dokter, Pasien pasien, Manajer manajer, ElType *N) {
    bool found = false;
    bool wrongpass = false;
    char pilih[3] ;
    for (int i = 0; i < pasien.length; i++) {
        if (UsernameAvailable(N, &pasien.buffer[i])) {
            if (RightPassword(N, &pasien.buffer[i])) {
                printf("Halo %s!!, ada keluhan apa?\n", pasien.buffer[i].username);
                found = true;
                return;
            } else {
                wrongpass = true;
            }
        }
    }

    for (int i = 0; i < dokter.length; i++) {
        if (UsernameAvailable(N, &dokter.buffer[i])) {
            if (RightPassword(N, &dokter.buffer[i])) {
                printf("Halo dokter %s!!\n", dokter.buffer[i].username);
                found = true;
                return;
            } else {
                wrongpass = true;
            }
        }
    }

    if (UsernameAvailable(N, manajer.data)) {
        if (RightPassword(N, *manajer.data)) {
            printf("Halo manajer %s!!\n", manajer.data.username);
            found = true;
        } else {
            wrongpass = true;
        }
        return;
    }

    if (!found && wrongpass) {
        printf("Maaf, Password atau Username anda salah\n");
    } else if (!found) {
        printf("Maaf, Akun tidak ditemukan\n");
        printf("Hal ini terjadi karena username dan password anda tidak terdaftar\n");
        printf("Ingin register?(yes\no)\n");
        scanf("%s", &pilih);   
        if(pilih=="yes") Register(pasien,N);
    }
}

