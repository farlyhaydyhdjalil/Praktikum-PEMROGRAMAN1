#include<stdio.h>

int main()
{
    float sisiA, sisiC, sisiB, KelilingSegitiga, LuasSegitiga;
    sisiA = 12;
    sisiC = 5;
    sisiB = sqrt(sisiA * sisiA + sisiC * sisiC);
    KelilingSegitiga = sisiA + sisiB + sisiC;
    LuasSegitiga = 0.5 * sisiA *sisiC;
    printf("diketahui :\n");
    printf("Alas = %.f cm\n", sisiC);
    printf("Tinggi = %.f cm\n\n", sisiA);
    printf("jawab :\n");
    printf("Sisi A = %.f cm\n", sisiA);
    printf("Sisi B = %.f cm\n", sisiB);
    printf("Sisi C = %.f cm\n", sisiC);
    printf("Keliling = %.f cm\n", KelilingSegitiga);
    printf("Luas = %.f cm\n", LuasSegitiga);
}
