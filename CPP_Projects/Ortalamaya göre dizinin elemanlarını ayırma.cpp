#include<stdio.h>
int main()
{
	int i,j=0;
	float toplam=0,ortalama,dizic[4];
	printf("C dizisinin elemanlarini giriniz  :");
	for(i=0;i<4;i++)
	{
		scanf("%f",&dizic[i]);
		toplam=toplam + dizic[i];
	}	
	ortalama=toplam / 4.0;
	printf("\n Ortalamadan kucuk olanlar :");
	for(i=0;i<4;i++)
	{
		if(dizic[i]<ortalama)
		{
			printf("%.1f  ",dizic[i]);
		}
	}
	printf("\n Ortalamadan buyuk olanlar :");
	for(i=0;i<4;i++)
	{
		if(dizic[i]>ortalama)
		{
			printf("%.1f  ",dizic[i]);
		}
	}
	return 0;			
	
}
