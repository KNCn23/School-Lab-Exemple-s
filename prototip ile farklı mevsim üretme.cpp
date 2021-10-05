#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void ertelemeMesajYaz(int);
int main(){
    int mesaj;
    printf("Mesaj Yaz :");
    scanf("%d" ,&mesaj);
    ertelemeMesajYaz(mesaj);
    return 0;
}

void ertelemeMesajYaz(int m)
{
    int i,rastgele_kod;
    if(m == 12 || m < 2)
        m = 1;
    else if(m < 5)
        m = 2;
    else if( m < 8)
        m = 3;
    else
        m = 4;
    while(i == 0){
        srand(time(NULL));
        for(i=1 ; i <= 4 ; i++){
            rastgele_kod = 1 + rand() % 4;}
        if(m == rastgele_kod)
            i=0;
        else
            i=1;
    }

    switch(rastgele_kod){
        case 1:
            printf("Kisin tatile gidecegiz");
            break;
        case 2:
            printf("ilkbaharda tatile gidecegiz");
            break;
        case 3:
            printf("yazin tatile gidecegiz");
            break;
        case 4:
            printf("sonbaharda tatile gidecegiz");
            break;
    }
}
