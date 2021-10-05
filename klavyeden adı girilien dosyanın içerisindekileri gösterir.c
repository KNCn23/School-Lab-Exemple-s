#include<stdio.h>
int main()
{
	char satir[70];
	char dosyaadi[20];
	FILE *dosya;
	
	printf("Dosya adini giriniz :");
	gets(dosyaadi);
	if((dosya = fopen(dosyaadi,"r")) == NULL)
	{
		printf("Dosya acilamadi");
		return 1;
	}
	fgets(satir,70,dosya); /*Dosya'nýn gösterdiði dosyadan 69 karakter okuyarak temp adlý dizgi deðiþkene aktar */
	while(!fof(dosya))
	{
		printf("%s",satir); /*fputs(satir de olabilir ve satir de tutulan dizgiyi ekrana yazar*/
		fgets(satir,70,dosya) /*dosayanýn gösterdiði dosyadan 69 karakter okuyarak satir adlý dizgi deðiþkene akatarýr .*/
	}
	fclose(dosya);
	return 0;
}
