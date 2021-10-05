#include<stdio.h>
int kacTaneVar(int dizi1[] , int bir, int dizi2[] , int iki);
{
	int i,sonuc=0,j;
	if(bir<iki)
	for(i=0;i<iki;i++)
	{
		for(j=0;j<bir;j++)
		{
			if(dizi2[i]==dizi1[j])
				sonuc++;
		}
	}
	else
	for(i=0;i<bir;i++)
	{
		for(j=0;j<iki;j++)
		{
			if(dizi1[i]==dizi2[j])
				sonuc++;
		}
	}
	return sonuc;
}
int main()
{
	int bir,iki,dizi1[],dizi2[],sonuc,i;
	printf("Nutfen birinci dizinin eleman sayisini giriniz :");
	scanf("%d",bir);
	printf("Nutfen %d eleman giriniz :",bir);
	for(i=0;i<bir;i++)
	{
		scanf("%d",dizi1[i]);
	}
	printf("\nNutfen ikinci dizinin eleman sayisini giriniz :");
	scanf("%d",iki);
	printf("Nutfen %d eleman giriniz :",iki);
	for(i=0;i<bir;i++)
	{
		scanf("%d",dizi2[i]);
	}
	sonuc=kacTaneVar(dizi1[],bir,dizi2[],iki);
	printf("Sonuc = %d",sonuc);
	return 0;
}
