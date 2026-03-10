#include<stdio.h>
int main()
{
	char cins;
	int muz=0,giris,i;
	printf("Maymunun cinsiyetini giriniz : ");
	scanf(" %c",&cins);
	printf("\nMaymun kafese kac kez girdi : ");
	scanf("%d",&giris);
	printf("\n---------------------------------------------");
	switch(cins){
		case'e':
		case'E':
			for(i=1;i<=giris;i++){
				if(i < 5)
				muz= muz + i * 2;
				else
				muz=muz + ((muz -i ) / 2 + 1)* 2 ; 
				printf("\n%d. girisinde toplamda %d adet muz yemistir .",i,muz);}
			break;
		case'k':
		case'K':
			for(i=1;i<=giris;i++){
				if(i < 5)
				muz = muz + i;
				else
				muz =muz + (muz -i) / 2 + 1 ;
				printf("\n%d. girisinde toplamda %d adet muz yemistir .",i,muz);}
			break;		
			
	} 
	
return 0;	
}
