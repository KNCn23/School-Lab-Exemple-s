#include<stdio.h>
int main()
{   int sayi;
	int i=2;
	int sonuc=1;
	printf("Faktroelini istediginiz sayiyi giriniz : ");
	scanf("%d",&sayi);
	
	while ( i <= sayi ){
		sonuc=sonuc*i;
		i++;
	}
	printf("\n Sonucunuz : %d",sonuc);
	return 0;
}
