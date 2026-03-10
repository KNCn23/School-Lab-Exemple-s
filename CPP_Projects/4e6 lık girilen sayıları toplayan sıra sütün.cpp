#include<stdio.h>
int main(){
    int sayilar[4][6];
    int m;
    int n;
    int sutun[6] = {0};

    for(m = 0 ; m < 4 ; m++){
        printf("%d. satirdaki sayilari giriniz :" ,m);
        for(n = 0 ; n < 6 ; n++)
            scanf("%d" ,&sayilar[m][n]);
        printf("\n"); 
    }

    for(m = 0 ; m < 4 ; m++){
        for(n = 0 ; n < 6 ; n++){

            sutun[n] = sutun[n] + sayilar[m][n];}
    }

        printf("\n");

        for(n = 0 ; n < 6 ; n++)
            printf("%d " ,sutun[n]);




    return 0;
}
