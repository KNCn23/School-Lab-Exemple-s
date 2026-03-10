#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int bahaneYaz(int);

int main(){

    int sayi;
    scanf("%d" ,&sayi);
    bahaneYaz(sayi);

return 0;
}

int bahaneYaz(int random)
{
    int i=0,rastgele_kod;
    while(i==0){

        srand(time(NULL));

    for(i=1 ; i <= 10 ; i++){
        rastgele_kod = 1 + rand() % 10;}

        if(random == rastgele_kod)
            i=0;
        else
            i=1;
    }

    switch(rastgele_kod){
        case 1:
            printf("Bu isin arkasinda Amerika vardir.");
            break;
        case 2:
            printf("Bu isin arkasinda Japonya vardir.");
            break;
        case 3:
            printf("Bu isin arkasinda Ispanya vardir.");
            break;
        case 4:
            printf("Bu isin arkasinda Fransa vardir.");
            break;
        case 5:
            printf("Bu isin arkasinda Rusya vardir.");
            break;
        case 6:
            printf("Bu isin arkasinda Katar vardir.");
            break;
        case 7:
            printf("Bu isin arkasinda Almanya vardir.");
            break;
        case 8:
            printf("Bu isin arkasinda Ingiltere vardir.");
            break;
        case 9:
            printf("Bu isin arkasinda Cin vardir.");
            break;
        case 10:
            printf("Bu isin arkasinda Turkiye vardir.");
            break;
    }

}
