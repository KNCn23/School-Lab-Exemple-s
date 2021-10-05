#include<stdio.h>
int main()
{
    int s1,s2,i,yedek;
    printf("Baslangic ve bitis sayilarini giriniz ");
    scanf("%d%d",&s1,&s2);
    if( s1 < s2 ){
    for(i=s1;i<=s2;i++){
        if ( i %2 == 0 ){
             printf("%d ",i);
            yedek++;}}
            printf("\n%d adet cift sayi vardir",yedek-1);}
    else{
        for(i=s2;i<=s1;i++){
        if ( i %2 == 0 ){
             printf("%d ",i);
            yedek++;}}
            printf("\n%d adet cift sayi vardir",yedek-1);}

    return 0;
}
