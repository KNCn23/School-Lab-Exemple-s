#include<stdio.h>
int main()
{
	float ucret,ek;
	int sure;
	printf("Saati giriniz ");
	scanf("%d",&sure);
	if( sure < 1)
	printf("\n Ucretiniz 5 TL ");
	else if( sure < 5 )
	printf("\n Ucretiniz 20 TL ");
	else if( sure <= 10 )
	ucret=40;
	else{
	ek=(sure/10)*0.5;
	ucret=40+ek;
	printf("\n Ucretiniz %.2f ",ucret);}
	return 0;
}
