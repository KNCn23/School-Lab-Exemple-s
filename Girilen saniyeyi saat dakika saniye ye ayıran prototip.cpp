#include<stdio.h>
void ayristir(int);
int main()
{
	int sayi;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
	ayristir(sayi);
	return 0;
}
void ayristir(int s)
{
	int saat,dak;
	saat = s / 3600;
	dak=(s - saat * 3600) / 60;
	s=s - saat * 3600 - dak * 60;
	printf("%d:%d:%d",saat,dak,s);

}
