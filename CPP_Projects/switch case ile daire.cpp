#include<stdio.h>
int main()
{

    char sekil;
    int kenar1,kenar2,yukseklik,taban;
    float alan,r,pi;

    printf("-----------MONU-----------\n");
    printf("(D veya d) Daire\n");
    printf("(T veya t) Dikdortgen\n");
    printf("(K veya k) Kare\n");
    printf("(U veya u) Ucgen\n");
    printf("--------------------------\n");

    printf("Seciminiz:");
    scanf("%c" ,&sekil);

        switch(sekil){
        case'd':
        case'D':
          printf("daire yaricapini giriniz:");
          scanf("%f" ,&r);
          pi=3.14;
          alan = pi * (r*r);
          printf("Yari capi %.2f olan dairenin alani= %.2f" ,r,alan);
        break;

        case'T':
        case't':
          printf("Dikdortgenin kenar uzunluklarini giriniz:");
          scanf("%d%d" ,&kenar1,&kenar2);
          alan = kenar1 * kenar2;
          printf("Birinci kenarý %d Ikinci kenari %d olan Dikdortgenin alani=%.2f" ,kenar1,kenar2,alan); 
        break;

        case'K':
        case'k':
          printf("kare kenar uzunluk giriniz:");
          scanf("%d" ,&kenar1);
          alan =kenar1 * kenar1;
          printf("Birinci kenarý %d Ikinci kenari %d olan Karenin alani=%.2f dir" ,kenar1,kenar2,alan); 
        break;

        case'U':
        case'u':
          printf("yuseklik ve taban gir");
          scanf("%d%d" ,&yukseklik,&taban);
          alan = (taban * yukseklik)/2;
          printf("Yuksekligi %d Tabaný %d olan ucgenin alani= %.2f",yukseklik,taban,alan);
        break;
    }
    return 0;
}
