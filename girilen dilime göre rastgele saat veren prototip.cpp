#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void zamanUret(char);
int main()
{	char zaman;
	printf("Zaman dilimini giriniz (s,S,o,O,a,A)");
	scanf(" %c",zaman);
	zamanUret(zaman);
	return 0;
}
void zamanUret(char z)
{	
	srand(time(NULL));
	int i,a,b,c;
	for(i=1;i<60;i++)
	{
		b=rand() % 60;
		c=rand() % 60;
	}
	switch(z)
	{
		case's':
		case'S':
			for(i=8;i<=10;i++)
			{
				a=rand() % 10; 
			}
			break;
		case'o':
		case'O':
			for(i=11;i<=15;i++)
			{
				a=rand() % 10; 
			}
			break;
		case'a':
		case'A':
			for(i=16;i<=22;i++)
			{
				a=rand() % 10; 
			}
			break;			
	}
	printf("\n%d:%d:%d",a,b,c);
	printf("ksaldksdklas");
}
