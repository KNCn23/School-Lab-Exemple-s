#include<stdio.h>
int main()
{
	int adet=0,yas=1,i=1,toplam,enb=0,enk=100,ktoplam,kadet;
	float ortalama,kortalama;
	while(yas != 0){
		printf("Yasi giriniz ! (0-100)\n");
		scanf("%d",&yas);
			if(yas > 100 || yas < 0){
				while(i != 0){
					printf("Yanlis bir deger girdiniz 100 ile 0 arasinda \n");
					scanf("%d",&yas);
				if(yas <= 100 && yas >= 0)
					i=0;}
					i=1;
			}
			
			if(yas >= enb)
				enb=yas;
			if( yas <= enk && yas != 0)
			 	enk=yas;
		toplam=toplam + yas;
		adet++;		
	}
	adet=adet - 1; //sifir degerini eksiltmek icin//
	ktoplam=toplam - (enb + enk);
	ortalama=toplam / adet ;
	kadet= adet - 2;
	kortalama= ktoplam / kadet;
	printf("Toplam %d adet izleyici giris yapti \n",adet);
	printf("Ortalama yas    	    = %.2f \n",ortalama);
	printf("Kirpilmis ortalama yas  = %.2f  \n",kortalama);
	return 0;
}
