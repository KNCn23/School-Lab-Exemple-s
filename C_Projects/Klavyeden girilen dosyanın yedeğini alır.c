#include<stdio.h>
int main()
{
	char kaynak[12];
	char ch;
	FILE *dosya1;
	FILE *dosya2;
	
	printf("Kopyasý alýnacak dosyanin adini giriniz :");
	scanf("%s",kaynak);
	if((dosya1 = fopen(kaynak,"r")) == NULL)
	{
		printf("Kaynak dosyasi acilamadi.");
		return 1;
	}
	if((dosya2 = fopen(yedek.bak,"w")) == NULL)
	{
		printf("yedek.bak dosyasi acilamadi.");
		return 1;
	}
	ch = fgetc(dosya1);
	while( !feof(dosya1)) /*ya da while (ch != EOF) */
	{
		fputc(ch,dosya2)	/* ch deðiþkeninin deðerini dosya 2 ye yaz */
		
		ch=fgetc(dosya1)  /* dosya 1 den 1 karakter oku ch deðiþkenine ata*/
	}
	fclose(dosya1);
	fclose(dosya2);
	return 0;
}
