#include<stdio.h>
int main()
{
	int sayi,rakam1,rakam2,rakam3;
	printf("3 basamakli bir sayi giriniz");
	scanf("%d",&sayi);
	rakam1=sayi/100;
    rakam2=(sayi-(rakam1*100))/10;
    rakam3=sayi-(rakam1*100)-(rakam2*10);
    if ( rakam1 > rakam2 && rakam1 > rakam3 )
   		printf("EN BUYUK RAKAM SAGDAN 3.DUR");
    if ( rakam2 > rakam1 && rakam2 > rakam3 )
    	printf("EN BUYUK RAKAM SAGDAN 2.DIR");
    if ( rakam3 > rakam2 && rakam3 > rakam1 )
    	printf("EN BUYUK RAKAM SAGDAN 1.DIR");
return 0;
}
