#include<stdio.h>
float cevirTL(float,float,float,float);

int main(){

    float birTL,ellikrs,ybkrs,onkrs;

    printf("Bozukluklarin agirliklarini sirasiyla kg cinsinden giriniz :\n");
    scanf("%f%f%f%f" ,&birTL,&ellikrs,&ybkrs,&onkrs);

    printf("Bozuklluklariin toplam ederi =%.2f TL" ,cevirTL(birTL,ellikrs,ybkrs,onkrs));

    return 0;
}

float cevirTL(float bir,float elli,float yb,float on)
{

    float sonuc;

    sonuc = ( bir * 1 / 8.2  +  elli * 0.5 / 6.8  + yb * 0.25/ 4  +  on * 0.1 / 3.15 ) * 1000;


    return sonuc;

}
