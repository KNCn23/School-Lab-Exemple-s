#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int dizi[50]={0},i,n,rast,a[50]={0},j,m,yedek;
    int adet=0;

    printf("Eleman sayisi giriniz :");
    scanf("%d" ,&n);

    srand(time(NULL));
    for(i=0 ; i<n ; i++){
        for(j=0 ; j<100 ; j++){
            rast = 1+ rand() % 100;
        }
        dizi[i] = rast;
    }

    printf("\nOtomatik olusturulan dizi: " );

    for(i=0 ; i<n ; i++){
        printf("%d " ,dizi[i]);
    }

    printf("\nDizinin siralanmis hali: ");

    for(i=0 ; i<n ; i++){
        a[i]=dizi[i];
    }
    for(i=1;i<=n;i++)

        for(m=0;m<n;m++)
           if(dizi[m]<dizi[m+1]){
                 yedek=dizi[m];
                 dizi[m]=dizi[m+1];
                 dizi[m+1]=yedek;

           }  
	for(m=0;m<n;m++)
       printf("%d ",dizi[m]);


    for(i=0 ; i<n ; i++){
        if(a[i] != dizi[i])
            adet++;
    }

    printf("\nYeri degisenlerin sayisi: %d" ,adet);


    return 0;
}
