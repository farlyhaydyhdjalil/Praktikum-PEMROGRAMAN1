#include <stdio.h>

int main()
{
    int i=0;
    while(i<=1){
    float jarijari,tinggibejana,phi,volume,luas,keliling;
    phi=22/7.f;
    scanf("%f %f", &jarijari,&tinggibejana);
    volume=phi*jarijari*jarijari*tinggibejana;
    luas=(2*phi*jarijari)*(jarijari+tinggibejana);
    keliling=(2*phi*jarijari);
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n\n", keliling);
    i++;
    }
}
