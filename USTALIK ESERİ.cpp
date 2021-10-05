#include<stdio.h>
int main()
{
 	int buyuk,kucuk,i=1,buyukn=0,buyuky=0,buyuka=0,kucukn=0,kucuky=0,kucuka=0,adet=0,tansiyon1,tansiyon2;
 	printf("Tansiyon olcme programina hosgeldiniz \n");
 	printf("Durdurmak icin herhangi bir degeri 0 giriniz \n");
 	printf("---------------------------------------------------------------\n");
 	while(buyuk != 0 || kucuk != 0){	
 		printf("\nTansiyon degerlerini giriniz (buyuk ve kucuk) \n");
 		scanf("%d%d",&buyuk,&kucuk);
 		if(buyuk >= 120 && buyuk <=140)
 			tansiyon1=1;
 		if(buyuk < 120 && buyuk > 0)
 			tansiyon1=2;
 		if(buyuk > 140)
 			tansiyon1=3;
		if(buyuk == 0)
		 	tansiyon1=0;	 	
 		switch(tansiyon1){
 			case 1:
 				printf("Buyuk tansiyonunuz NORMAL,");
				buyukn++;
				break;			
 			case 2:
 				printf("Buyuk tansiyonunuz ALCAK,");
 				buyuka++;
 				break;
			case 3: 
			 	printf("Buyuk tansiyonunuz YUKSEK,");
			 	buyuky++;
				break;}
		if(kucuk >= 70 && kucuk <=90)
 			tansiyon2=4;
 		if(kucuk < 70 && kucuk > 0)
 			tansiyon2=5;
 		if(kucuk > 90)
 			tansiyon2=6;
		if(kucuk == 0)
		   tansiyon2=0;	 		
	    switch(tansiyon2){
	    	case 4:
				printf(" Kucuk tansiyonunuz NORMAL");
				kucukn++;
				break;
			case 5:
				printf(" Kucuk tansiyonunuz ALCAK");
				kucuka++;
				break;
			case 6:
				printf(" Kucuk tansiyonunuz Yuksek");
				kucuky++;
				break;}
	 }
	 printf("\nPROGRAM SONA ERDI\n");
printf("\nBuyuk: ( NORMAL = %d , YUKSEK = %d , ALCAK = %d ) \n",buyukn,buyuky,buyuka);
printf("Kucuk: ( NORMAL = %d , YUKSEK = %d , ALCAK = %d ) \n",kucukn,kucuky,kucuka);
return 0;
}
