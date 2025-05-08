#include "login.h"
#include "register.h"

int main() {          
    Pasien pasien = CreatePasien(2, 10); 
    strcpy(pasien.buffer[0].username, "kageyama");
    strcpy(pasien.buffer[0].password, "tobio");
    strcpy(pasien.buffer[1].username, "hinata");
    strcpy(pasien.buffer[1].password, "shoyo");
    
    Dokter dokter = CreateDokter(2, 10);
    strcpy(dokter.buffer[0].username, "enoshita");
    strcpy(dokter.buffer[0].password, "ganteng");
    strcpy(dokter.buffer[1].username, "sawamura");
    strcpy(dokter.buffer[1].password, "daichi");
    
    ElType managerData;
    strcpy(managerData.username, "kuroo");
    strcpy(managerData.password, "tetsurou");
    Manajer manajer = CreateManajer(managerData);
    
    ElType loginData;
    printf("Masukkan username: ");
    scanf("%s", loginData.username);
    printf("Masukkan password: ");
    scanf("%s", loginData.password);
    
    PrintAkun(pasien, dokter, manajer, &loginData);
    
    FreePasien(&pasien);            
    FreeDokter(&dokter);        
    return 0;
}