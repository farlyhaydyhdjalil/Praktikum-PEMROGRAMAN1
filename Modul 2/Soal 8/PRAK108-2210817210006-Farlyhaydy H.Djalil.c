#include<stdio.h>

int main()
{
    float TotalPutaran =5;
    float TelahBerlari =14;
    float SekaliPutaran = TelahBerlari/TotalPutaran;
    float phi =3.14;
    float jarijarilingkaran = SekaliPutaran/(2 * phi);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran\n", TotalPutaran);
    printf("Jarak tempuh Pak Dengklek = %.f kilometer\n\n", TelahBerlari);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jarijarilingkaran);
}

