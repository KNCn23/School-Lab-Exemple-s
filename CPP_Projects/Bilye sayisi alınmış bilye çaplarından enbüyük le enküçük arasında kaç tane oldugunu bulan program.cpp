#include<stdio.h>
int enbEnkArasiUzaklik(float [],int);
int main()
{	float bilye[50];
	int i,adet=51;
	while(adet>50)
	{
		printf("Adeti giriniz : (max 50)");
		scanf("%d",&adet);	
	}
	printf("\n%d adet Bilye capi giriniz :",adet);
	for(i=0;i<adet;i++)
	{
		scanf("%f",&bilye[i]);
	}
	
	printf("\nEn buyuk ile en kucuk arasinda %d kadar bilyedir.",enbEnkArasiUzaklik(bilye,adet)-1);
	
}
int enbEnkArasiUzaklik(float dizi[],int adet)
{
	int i,sonuc,enb,enk;
	float x=0,y=1000;
	for(i=0;i<adet;i++)
	{
		if(dizi[i]>x)
		{
			x=dizi[i];
			enb=i;
		}
		if(dizi[i]<y)
		{
			y=dizi[i];
			enk=i;
		}	
	}
	sonuc=enk-enb;
	if(sonuc<0)
	sonuc=sonuc * -1;
	return sonuc;
}
