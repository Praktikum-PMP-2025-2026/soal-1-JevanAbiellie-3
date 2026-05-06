/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 4 - Dynamic Structures
 *   Hari dan Tanggal    : Rabu, 6 Mei 2026
 *   Nama (NIM)          : Jevan Abiellie (13224056)
 *   Nama File           : Soal1.c
 *   Deskripsi           : Membuat list antrean dan waktunya
 * 
 */

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char ID[n][10];
    int time[10];
    int total = 0;
    for (int i = 0; i < n; i++){
        scanf("%s\n",  &ID[i]);
        scanf("%d", &time[i]);
    }
    for (int i = 1; i < n-1; i++){
        total += time[i] * (n-i);
    }
     printf("ORDER " );
    for (int i = 0; i < n; i++){
        printf("%s ", ID[i]);
    }
    printf("\nWAIT ");
    printf("%d", total);
}
    
