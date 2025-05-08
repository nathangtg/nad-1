#include "register.h"
#include "login.h"

Pasien Register(Pasien pasien, ElType *N) {
    if (pasien.length < pasien.capacity) {
        strcpy(pasien.buffer[pasien.length].username, N->username);
        strcpy(pasien.buffer[pasien.length].password, N->password);
        pasien.length++;

        // Print the entire array of patients
        printf("Registered patients:\n");
        for (int i = 0; i < pasien.length; i++) {
            printf("Username: %s, Password: %s\n", pasien.buffer[i].username, pasien.buffer[i].password);
        }
        printf("Registration successful.\n");
    } else {
        printf("Database full, registration failed.\n");
    }
    return pasien;  
}