#include<stdio.h>
int enk(int [],int);
int main()
{
	int dizi[10],i;
	printf("Dizi elemanlarini giriniz : ");
	for(i=0;i<10;i++){
		scanf("%d",&dizi[i]);
	}
	printf("Dizinin en kucuk elemani = %d",enk(dizi,10));
	return 0;
}
int enk(int a[],int n)
{
	int enkucuk,i;
	enkucuk=a[0];
	for(i=0;i<n;i++){
		if(enkucuk > a[i])
			enkucuk = a[i];
	}
	return enkucuk;
}
	
