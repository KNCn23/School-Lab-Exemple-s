#include<stdio.h>
float ortalama(float[] ,int);

int main(){

    float dizi[10]={2.4,3.8,3.1,7.8,0.5,6.3,2.8,1.0,5.6,3.7};
    float ort;

    printf("Ortalamasi = %.2f" ,ortalama(dizi ,10));

    return 0;
}

float ortalama(float a[] ,int n)
{
    int i;
    float toplam = 0,ortalama;

    for(i=0;i<10;i++){
        toplam = toplam + a[i];
    }
    ortalama = toplam / 10.0;

    return ortalama;

}
