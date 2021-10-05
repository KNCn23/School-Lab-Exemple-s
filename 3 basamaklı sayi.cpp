#include<stdio.h>
int main()
{
	int sayi,rakam1,rakam2,rakam3;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
   rakam1=sayi/100;
   rakam2=(sayi-(rakam1*100))/10;
   rakam3=sayi-(rakam1*100)-(rakam2*10);
   if( rakam1 == 0 || rakam2 == 0 || rakam3 == 0){
   if( rakam1 == 0 ){
	 	if( rakam2 < rakam3 )
		 printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam2,rakam1,rakam3);  	
		else
		 printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam3,rakam1,rakam2);}
	if( rakam2 == 0 ){
	    if( rakam1 < rakam3 )
	   	 printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam1,rakam2,rakam3);
	    else
		 printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam3,rakam2,rakam1);}	
	if( rakam3 == 0 ){
	   if( rakam1 < rakam2 )
	     printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam1,rakam3,rakam2);
	    else
		 printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam2,rakam3,rakam1);}}
   else if( rakam1 < rakam2 && rakam1 < rakam3 ){
       if( rakam2 < rakam3)
          printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam1,rakam2,rakam3);
       else 
	      printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam1,rakam3,rakam2);}
	else if ( rakam2 < rakam1 && rakam2 < rakam3 ){
		if( rakam1 < rakam3)
		  printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam2,rakam1,rakam3);
		else
		  printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam2,rakam3,rakam1);}
	else if ( rakam3 < rakam1 && rakam3 < rakam2 ){
		if( rakam1 < rakam2 )
		  printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam3,rakam1,rakam2);
		else
		  printf("Elde edilebilicek en kucuk sayi :%d%d%d \n",rakam3,rakam2,rakam1);}
	return 0;		      
	} 
