#include<stdio.h>
float yardmetrecevir(int,char);
int main()
{
	int sayi;
	char tur;
	printf("Sayiyi ve turu giriniz");
	scanf("%d %c",&sayi,&tur);
	printf("\n %.4f",yardmetrecevir(sayi,tur));
	return 0;
}
float yardmetrecevir(int deger,char tur)
{ 	float sonuc;
	switch(tur)
	{
		case'y':
		case'Y':
				sonuc= deger * 0.9144;
				break;
		case'm':
		case'M':
				sonuc= deger / 0.9144;
				break;			
	}
	return sonuc;
}
