#include<stdio.h>
int donduren(int);
int main()
{
	int sayi;
	printf("Sayiyi giriniz :  ");
	scanf("%d",&sayi);
	printf("\n %d",donduren(sayi));
	return 0;
}
int donduren(int s)
{	
	int sonuc;
	if(s == 0)
		sonuc= 0;
	else if(s > 0)	
		sonuc= 1;
	else if(s < 0)
		sonuc= -1;
	return sonuc;		
}
