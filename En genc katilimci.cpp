#include<stdio.h>
int main()
{
	int yas=1,enk=100,min=0,i=1,yedek;
	while ( yas != 0 ){
		yedek = enk ;
		printf("Yasi giriniz   :\n");
		scanf("%d",&yas);
		if(yas > 100 || yas < 0){
			while(i != 0){
				printf("GECERELI BIR YAS GIRINIZ \n");
				scanf("%d",&yas);
			if( yas < 100 && yas > 0)
					i=0;  }  i=1; }
		if ( yas <= enk && yas != 0){
		enk=yas;
		min++;	}	
		if ( yedek != enk )
		min=1;					
}
printf("En genc katilimci  : %d \n",enk);
printf("Bu yasta toplam %d kisi girmistir \n",min);
return 0;
}
