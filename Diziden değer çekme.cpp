#include<stdio.h>
int main()
{
	int dizi[5] = {13,12,0,5,8};
	int i,aranacak,yer=-1;
	
	printf("Aranacak degeri giriniz ");
	scanf("%d",&aranacak);
	for(i=0;i<5;i++){
		if(dizi[i] == aranacak )
		yer=i+1;
	}
	if(yer != -1)
	printf("\n Aradiginiz deger %d no lu indisde bulunmaktadir ",yer);
	else
	printf("\n Aradiginiz deger dizide bulunmamaktadir ");
	return 0;
}
