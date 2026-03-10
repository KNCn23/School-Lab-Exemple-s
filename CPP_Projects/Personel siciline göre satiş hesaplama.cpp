#include<stdio.h>
int main()
{	int personel[50],sicil[50],satis[50];
	int i,adet=51,enb=0;
	while(adet>50)
	{
		printf("Adeti giriniz : (max 50)");
		scanf("%d",&adet);	
	}
	for(i=0;i<adet;i++)
	{
		printf("\n%d. personalin sicili ve satis miktari :",i+1);
		scanf("%d%d",&sicil[i],&satis[i]);
	}
	for(i=0;i<adet;i++)
	{
		if(satis[i]>enb)
		enb=satis[i];
	}
	printf("\n*******************************\n");
	printf("Personal ne kadar satis yapacak\n");
	printf("Sicil     : ");
	for(i=0;i<adet;i++)
	{
		printf("%d   ",sicil[i]);
	}
	printf("\nIhtiyac   : ");
	for(i=0;i<adet;i++)
	{
		printf("%d   ",enb-satis[i]);
	}
	
	return 0;
}
