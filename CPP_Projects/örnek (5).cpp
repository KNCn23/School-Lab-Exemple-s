#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void hastaKaydet(int[],int);
int fazlaMesai(int[],int);
int main(){

    int hasta[26];
    int i;
    srand(time(NULL));
    for(i = 0 ; i < 26 ; i++){
        hasta[i] = rand()%121; 
    }
    hastaKaydet(hasta,26);
    printf("\n-------------------\n");
    printf("Toplam fazla mesai ucreti:%.2d TL" ,fazlaMesai(hasta,26));
    return 0;
}
void hastaKaydet(int hasta[] ,int N)
{
    int i,j;
    int sayi=26;
    for(i = 0 ; i < N ; i++){
        if(hasta[i] == 0)
            sayi = sayi - 1;
    }
    printf("Toplam %d hasta kaydedildi." ,sayi);
    for(j=9;j<22;j++){

        printf("\n%d.00 hasta yasi= %d",j,hasta[j-9]);
        printf("\n%d.30 hasta yasi= %d",j,hasta[35-j]); 
    }
}
int fazlaMesai(int hasta[] ,int N)
{
    int i;
    int toplam = 0 ;

    for(i = 8 ; i <= 17 ; i++){
        if(hasta[i] < 18 && hasta[i] > 0)
            toplam = toplam + 20;
        else if(hasta[i] <= 120 && hasta[i] > 0)
            toplam = toplam + 120;
    }
    return toplam;
}
