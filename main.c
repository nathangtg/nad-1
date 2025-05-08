#include "login.h"
#include "register.h"
#include "register.c"
#include "login.c"

int main() {          
    Pasien pasien = CreatePasien(2, 10); 
    strcpy(pasien.buffer[0].username, "kageyama");
    strcpy(pasien.buffer[0].password, "tobio");
    strcpy(pasien.buffer[1].username, "hinata");
    strcpy(pasien.buffer[1].password, "shoyo");
    
    Dokter dokter=CreateDokter(2, 10);
    strcpy(dokter.buffer[0].username, "enoshita");
    strcpy(dokter.buffer[0].password, "ganteng");
    strcpy(dokter.buffer[1].username, "sawamura");
    strcpy(dokter.buffer[1].password, "daichi");
    
    Manajer manajer;
    CreateManajer(manajer.data);
    strcpy(manajer.data.username, "kuroo");
    strcpy(manajer.data.password, "tetsurou");
    
    ElType loginData;
    printf("Masukkan username: ");
    scanf("%s", loginData.username);
    printf("Masukkan password: ");
    scanf("%s", loginData.password);
    IsRegistered(dokter, pasien, manajer, &loginData);
    FreePasien(&pasien);            
    FreeDokter(&dokter);        
    return 0;
}
