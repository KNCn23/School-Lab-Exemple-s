#include<stdio.h>
int main()
{
	int sayi,adet;
	printf("Sayiyi giriniz ");
	scanf("%d",&sayi);
	while(sayi != 1){
		printf("%d \n",sayi);
		if ( sayi%2 == 0)
		sayi= sayi / 2 ;
		else
		sayi= sayi * 3 + 1;	
		adet ++;	
	}
	printf("%d Adet",adet);
	return 0;
}
