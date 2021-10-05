#include<stdio.h>

int main(){

    int sayilar[5][5];
    int n;//sa
    int m;//su
    int toplam1=0;
    int    toplam2=0;

    for(n = 0 ; n < 5 ; n++){
        printf("%d nolu satirdaki elemanlari giriniz :" ,n);
            for(m = 0 ; m < 5 ; m++)
                scanf("%d" ,&sayilar[n][m]);
        printf("\n");
    }

    for(n = 0 ; n < 5 ; n++){
        toplam1 = toplam1 + sayilar[n][n];}

    for(m = 5 ; m > 0 ; m--){
        toplam2 = toplam2 + sayilar[5-m][m-1];}



    printf("\n\n\n");
    printf("Sol kosegenlerin toplami = %d\n" ,toplam1);
    printf("sag kosegenlerin toplami = %d\n" ,toplam2);


    return 0;
}
