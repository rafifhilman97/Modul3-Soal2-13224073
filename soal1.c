// PRAKTIKUM PMP 
// Modul      : Foundation of Algorithm 
// Nama       : Rafif Hilman Muhammad
// NIM        : 13224073
// Nomor Soal : 2

#include <stdio.h>

int NilaiFPB(int ukuranA, int ukuranB){ //
    int sisa = ukuranA % ukuranB;
    while ((sisa) != 0){
        ukuranA = ukuranB;
        ukuranB = sisa;
        sisa = ukuranA % ukuranB;
    }
    return ukuranB;
}

int langkahMinimum(int ukuranA, int ukuranB, int takaran){
    int langkah = 0;
    //int gelasA = ukuranA;
    //int gelasB = ukuranB;
    int FPB = NilaiFPB(ukuranA, ukuranB);
    
    if (ukuranA == takaran || ukuranB == takaran){
        langkah = 1;
        return langkah;
    }
    else if (ukuranA < takaran && ukuranB < takaran){
        langkah = -1;
        return langkah;
    }
    else if(ukuranA == ukuranB && ukuranA != takaran){
        langkah = -1;
        return langkah;
    }
    else if(takaran % FPB != 0){
        langkah = -1;
        return langkah;
    }
/*
    while (gelasA != takaran || gelasB != takaran){
        if (gelasA > gelasB){

        }
        else if (gelasB > gelasA){

        }
    }
*/
    return langkah;
}

int main(void){
    int gelasA;
    int gelasB;
    int takaran;
    scanf("%d %d %d", &gelasA, &gelasB, &takaran);

    printf("%d\n", langkahMinimum(gelasA, gelasB, takaran));

    return 0;
}
