/*Dosya içine kayýt yazan program*/
#include<stdio.h>

struct musteriler
{
	int sira;
	char ad[15];
	char soyad[10];
	double borc;
};

typedef struct musteriler Musteriler;

int main()
{
	int sira;
	Musteriler musteri;
	FILE *cfPtr;
	
	/*Dosya okuma-yazma için r+ modunda açýlýyor*/
	if((cfPtr = fopen("musteri.dat","r+"))== NULL)
	{
		printf("Dosya acilamadi");
		return 1;
	}
	printf("Sira numarasini giriniz (1-100):");
	scanf("%d",&sira);
	fseek(fPtr,(sira-1)*sizeof(Musteriler),SEEK_SET);
	fread(&musteri,sizeof(struct musteriler),1,fPtr);
	if(musteri.sira != 0)
	{
		printf("%d. sirada veri var \n",musteri.sira);
		printf("%-6d%-16s%-11s%10.2f \n",musteri.sira,musteri.ad,musteri.soyad,musteri.borc);
	}
	else
	{
		printf("Ad,soyad,borc ? \n");
		scanf("%s%s%f",&musteri.ad,&musteri.soyad,&musteri.borc);
		musteri.sira = sira;
		fseek(fPtr,(sira-1) *sizeof(Musteriler),0);
		fwrite(&musteri,sizeof(Musteriler),1,fPtr);
	}
	fclose(cfPtr);
	return 0;
}
