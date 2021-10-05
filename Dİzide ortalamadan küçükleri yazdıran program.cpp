#include<stdio.h>

int main()
{	
	int toplam=0,i,dizi[5];
	float ortalama;
	printf("5 eleman giriniz  :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&dizi[i]);
		toplam+=dizi[i];
	}
	ortalama=toplam / 5.0;
	printf("%.2f\n",ortalama);
	printf("Ortalamadan kucuk elemanlar \n");
	for(i=0;i<5;i++)
	{
		if(dizi[i]<ortalama)
			printf("%d ",dizi[i]);
	}
return 0;
}
