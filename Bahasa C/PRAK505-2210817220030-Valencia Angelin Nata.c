#include <stdio.h>
void Biodata(int TL,char Nama[30],char Asal[20]){
int tahun_sekarang = 2020;
printf("\nPerkenalkan Nama Saya : %s\n", Nama);
printf("Umur Saya : %d\n", tahun_sekarang-TL);
printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
printf("Asal Saya dari : %s\n", Asal);
}
int main() {
int TL;
char A[30], B[20];
scanf(" %d",&TL);
scanf(" %[^\n]%*c",&A);
scanf(" %[^\n]%*c",&B);
Biodata(TL, A, B);
return 0;
}
