/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 4 - Dynamic Structures
 *   Hari dan Tanggal    : Rabu, 6 Mei 2026
 *   Nama (NIM)          : Jevan Abiellie (13224056)
 *   Nama File           : Soal1.c
 *   Deskripsi           : Membuat list antrean dan waktunya
 * 
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct pasien{
    char ID[10];
    int waktu;
    struct pasien *next;
};

struct pasien *head = NULL;

void add(struct pasien **head, char ID[], int waktu){
struct pasien *new = malloc(sizeof(struct pasien));
    strcpy(new->ID, ID);
    new->waktu = waktu;
    new->next = NULL;
    if (*head == NULL){
        *head = new;
        return;
    }
    struct pasien *temp = *head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new;
}

void tampil(struct pasien *head){
    struct pasien *temp = head;
    printf("ORDER ");
    while (temp != NULL){
        printf("%s ", temp->ID);
        temp = temp->next;
    }
}

void totul(struct pasien *head, int n, int *total){
    struct pasien *temp = head;
    int i = 0;
    *total = 0;
    while (temp->next != NULL){
        *total += temp->waktu * (n-i-1);
        temp = temp->next;
        i++;
    }
    printf("\nWAIT %d", *total);
    
}
int main(){
    int n;
    char ID[10];
    int waktu;
    int total;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s\n", &ID);
        scanf("%d", &waktu);
        add(&head, ID, waktu);
    }
    tampil(head);
    totul(head, n, &total);

}
//referensi : https://stackoverflow.com/questions/60027278/how-would-i-scan-a-string-of-unknown-length-in-c-is-there-a-way-to-do-without-u
