#include<stdio.h>
int main()
{
	float boy,ideal,yedek;
	int kilo;
	char cinsiyet;
	printf("Cinsiyetinizi giriniz (e,E-k,K)   :");
	scanf(" %c",&cinsiyet);
	printf("\nBoyunuz (m)  :");
	scanf("%f",&boy);
	printf("\nKilonuz (kg) :");
	scanf("%d",&kilo);
	printf("\n---------------------------------------");
	switch(cinsiyet){
		case'e':
		case'E':
			if( boy > 1.5 ){
			 yedek=boy - 1.5;
			 yedek=yedek / 0.025;
			 ideal=48 + yedek * 2.7;}
			else{
			 yedek=boy;
			 yedek=yedek / 2.5;
			 ideal=yedek * 2.7;}
			break;
		case'k':
		case'K':
			if( boy > 1.5 ){
			 yedek=boy - 1.5;
			 yedek=yedek / 0.025;
			 ideal=45 + yedek * 2.2;}
			else{
			 yedek=boy;
			 yedek=yedek / 2.5;
			 ideal=yedek * 2.2;}
			break; 	 	
	}
	printf("\nIdeal kilonuz : %.2f",ideal);
	if ( ideal < kilo )
	 	printf("\nIdeal kilonuzdan daha agirsiniz");
	else
		printf("\nIdeal kilonuzdan daha zayifsiniz"); 	
	return 0;	
}
