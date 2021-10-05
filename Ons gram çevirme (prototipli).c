#include<stdio.h>
float gronzcevir(char,int);
int main()
{    
	int sayi;
	char tur;
	printf("Cinsi ve grmaji giriniz : ");
	scanf(" %c%d",&tur,&sayi);
	printf("\n %.7f ",gronzcevir(tur,sayi));
	return 0;
}
float gronzcevir(char tur,int gram)
{   float deger;
	switch(tur)
	{
		case'O':
		case'o':
		  		deger= gram * 28.3495231;

				break;
		case'G':
		case'g':
				deger= gram / 28.3495231;
				break;			
	}
	return deger;
}
