#include"register.h"
#include "login.h"

Pasien Register(Pasien pasien, ElType *N) {
    if (pasien.length < pasien.capacity) {
        strcpy(pasien.buffer[pasien.length].username, N->username);
        strcpy(pasien.buffer[pasien.length].password, N->password);
        pasien.length++;}
        return pasien;  
    }
