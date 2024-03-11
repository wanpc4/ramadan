#include <stdio.h>

//Muka surat
int brpKhatam(int khatam){
    int bil_ms;
    switch(khatam){
        case 1:
            bil_ms = 4;
            break;
            
        case 2:
            bil_ms = 8;
            break;
            
        case 3:
            bil_ms = 12;
            break;
            
        default:
            break;
    }
    return bil_ms;
}

void bahagianA(int muka_surat, char * bulan){ //Dapatkan jumlah muka surat yang perlu dibaca
    char * waktu_solat[5] = {"Subuh","Zuhur","Asar","Tarawih","Tahajjud"};
    char * brp_kali = "Satu";
    char bahagian = 'A';
    printf("\n%c. %s kali dalam bulan %s\n", bahagian, brp_kali, bulan);
    for(int j = 0; j < 5; j++){ //5 waktu solat: "Subuh","Zuhur","Asar","Tarawih","Tahajjud"
        printf("• Setelah solat %s %d muka surat\n", waktu_solat[j], muka_surat);
    }   
    printf("Kemudian di akhir %s dilebihkan %d muka surat lagi.\n", bulan, muka_surat);
}

void bahagianB(int muka_surat, char * bulan){ 
    char * waktu_solat[5] = {"Subuh","Zuhur","Asar","Tarawih","Tahajjud"};
    char * brp_kali = "Dua";
    char bahagian = 'B';
    printf("\n%c. %s kali dalam bulan %s\n", bahagian, brp_kali, bulan);
    for(int j = 0; j < 5; j++){ 
        printf("• Setelah solat %s %d muka surat\n", waktu_solat[j], muka_surat);
    }   
    printf("Kemudian di akhir %s dilebihkan %d muka surat lagi.\n", bulan, muka_surat);
}

void bahagianC(int muka_surat, char * bulan){ 
    char * waktu_solat[5] = {"Subuh","Zuhur","Asar","Tarawih","Tahajjud"};
    char * brp_kali = "Tiga";
    char bahagian = 'C';
    printf("\n%c. %s kali dalam bulan %s\n", bahagian, brp_kali, bulan);
    for(int j = 0; j < 5; j++){ 
        printf("• Setelah solat %s %d muka surat\n", waktu_solat[j], muka_surat);
    }   
    printf("Kemudian di akhir %s dilebihkan %d muka surat lagi.\n", bulan, muka_surat);
}

int main(){
    char * bulan = "Ramadan"; 
    int brp_kali_khatam, bil_mukaSurat;
    printf("Cara paling mudah khatam Al-Quran ialah dengan beransur-ansur membacanya setiap kali selepas solat fardu.\n");
    
    //Satu kali khatam
    brp_kali_khatam = 1;
    //Dapatkan jumlah muka surat:
    bil_mukaSurat = brpKhatam(brp_kali_khatam);
    bahagianA(bil_mukaSurat,bulan);
    //Konsep yang sama digunakan pada bahagian B dan C.
    
    brp_kali_khatam = 2;
    bil_mukaSurat = brpKhatam(brp_kali_khatam);
    bahagianB(bil_mukaSurat,bulan);
    
    brp_kali_khatam = 3;
    bil_mukaSurat = brpKhatam(brp_kali_khatam);
    bahagianC(bil_mukaSurat,bulan);
    
    return 0;
}
