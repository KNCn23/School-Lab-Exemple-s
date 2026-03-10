#include<stdio.h>
int main()
{
	int sayi,borc,ay;
	printf("Hangi ayda (1-12) ,Kac kisi gidiceksiniz  ");
	scanf(" %d%d",&ay,&sayi);
	switch(ay){
		default:
		    printf("12 AY VAR");
		    break;
		case 3:
		case 4:
		case 5:
			borc=sayi*35;
		case 9:
		case 10:
		case 11:
		    borc=sayi*45;
		    break;
		case 6:
		case 7:
		case 8:
		    borc=sayi*80;
		    break;
		case 12:
		case 1:
		case 2:
		    borc=sayi*75;
			break;
		}
	printf("\n Toplam borcunuz %d",borc);	
return 0; }
