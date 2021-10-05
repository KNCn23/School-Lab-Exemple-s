#include<stdio.h>
int main()
{
	char tur;
	int kisi,koltuk,sayi;
	float oran,x;
	printf("Tur turunu giriniz  (I,i,D,d) :");
	scanf(" %c",&tur);
	printf("\nTura kac kisi katilicak :");
	scanf("%d",&kisi);
	printf("\n--------------------------------\n");
	sayi= (kisi / 46) + 1 ;
	koltuk= (sayi * 46) - kisi ;
		printf("Bu tur icin %d adet otobus gerekmektedir .\n",sayi);
		printf("Turdaki bos koltuk sayisi %d.\n",koltuk);
	switch(tur){
		case'I':
		case'i':
			x= 46 * sayi;
			oran= kisi / x ;
			printf("Turun doluluk orani %.2f \n",oran);
			if ( oran < 0.6 )
			printf("Karlilik derecesi = ZARAR \n");
			else if ( oran >= 0.9 )
			printf("Karlilik derecesi = COK KAARLI \n");
			else
			printf("Karlilik derecesi = KAARLI \n");
		break;
		case'D':
		case'd':
			x= 46 * sayi;
			oran= kisi / x ;
			printf("Turun doluluk orani %.2f \n",oran);
			if ( oran < 0.7 )
			printf("Karlilik derecesi = ZARAR \n");
			else if ( oran >=  0.9 )
			printf("Karlilik derecesi = COK KAARLI \n");
			else
			printf("Karlilik derecesi = KAARLI \n");
		break;			
	}
		return 0;
}
