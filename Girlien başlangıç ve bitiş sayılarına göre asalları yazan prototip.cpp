#include<stdio.h>
void asalyaz(int,int);

int main(){

    int bas,bit;
    printf("Baslangic ve bitis sayisini giriniz :");
    scanf("%d%d" ,&bas,&bit);

    asalyaz(bas,bit);

    return 0;
}
void asalyaz(int b,int s)
{
	int i,test,j;
	for(i=b;i<=s;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i % j == 0)
				test++;	
		}
		if(test == 0)
			printf("%d ,",i);
		test = 0;	
	}
}
