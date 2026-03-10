#include<stdio.h>
int main()
{
	int dizia[5],dizib[5],dizic[10],i;
	printf("A dizisinin elemanlarini giriniz (5 tane) \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&dizia[i]);
		dizic[i]=dizia[i];
	}
	printf("B dizisinin elemanlarini giriniz (5 tane) \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&dizib[i]);
		dizic[i+5]=dizib[i];
	}
	printf("\n C dizisinin elemanlari ");
	for(i=0;i<10;i++)
	{
		printf("%d ",dizic[i]);
	}
	return 0;
}
