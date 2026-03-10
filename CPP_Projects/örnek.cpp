#include<stdio.h>
int main()
{
	int taksit,indirim;
	float taksitlifiyat,indirimlifiyat,sonodeme,odemetutar;
	printf("Harcama tutarini giriniz:");
	scanf("%f",&odemetutar);
	printf("\nTaksit sayisini giriniz (1,6,9)");
	scanf("%d",&taksit);
	if( taksit != 1 && taksit !=6 && taksit !=9)
	printf("Hatali giris, 1 taksit gecerli olacak!");
	printf("\nVarsa indirim tutarini giriniz (Tutarin yarisindan fazla olamaz):");
	scanf("%d",&indirim);
	if ( indirim >= odemetutar / 2 ){
	taksit=1;
	indirim=0;}
	switch(taksit){
		case 6:
			if ( odemetutar < 1000 )
			   odemetutar=odemetutar + odemetutar / 2;
			else
			   odemetutar=odemetutar + odemetutar / 4;
			break;
		case 9:
		    if ( odemetutar < 1000 )
			   odemetutar=odemetutar=odemetutar + odemetutar * 3 / 4;
			else
			   odemetutar=odemetutar + odemetutar / 2;
			break;     }
	indirimlifiyat=odemetutar - indirim;
	taksitlifiyat=indirimlifiyat / taksit;
	printf("\nTutar           =%.2f TL",odemetutar);
	printf("\nIndirim miktari =%d TL",indirim);
	printf("\nIndirimli tutar =%.2f TL",indirimlifiyat);
	printf("\nTaksit Sayisi   = %d",taksit);
	printf("\nTaksit Miktari  = %.2f",taksitlifiyat);
	return 0;		
}
