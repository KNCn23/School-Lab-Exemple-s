#include<stdio.h>
int main()
{
	int n,i;
	float s1,alan;
	printf("Kenar uzunlugunu  giriniz   :");
	scanf("%f",&s1);
	printf("\nKare sayisini giriniz       :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		alan= alan + s1*s1;
		s1= s1 / 2;
	}
	printf("Toplam alan =%.2f",alan);
return 0;}
