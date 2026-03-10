#include<stdio.h>

int kactane(int [],int ,int);

int main(){
    int a[10] = {13,12,0,5,13,13,12,-1,4,7};
    int aranacak;
    printf("Aranacak degeri giriniz :");
    scanf("\n%d" ,&aranacak);
    printf("\n%d den dizi icerisinde %d tane vardir." ,aranacak,kactane( a , 10 , aranacak));

    return 0;
}
int kactane(int au[],int n,int aranacak)
{
    int i;
    int adet = 0;

    for(i=0 ; i<n ; i++){
        if(au[i]==aranacak)
            adet++;
    }
    return adet;
}

