#include<stdio.h>

int main()
{
    int JumlahPasukan, JumlahPahlawan, JumlahDilawanPerPahlawan;
    JumlahPasukan = 958730;
    JumlahPahlawan = 5;
    JumlahDilawanPerPahlawan = JumlahPasukan/JumlahPahlawan;
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", JumlahPasukan);
    printf("Jumlah pahlawan = %d\n", JumlahPahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", JumlahDilawanPerPahlawan);
}
