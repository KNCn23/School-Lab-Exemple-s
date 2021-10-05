#include<stdio.h>
int main()
{
	int dizi[6],i,j;
	printf("Sayilari giriniz");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&dizi[i]);		
	}
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=dizi[i];j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
