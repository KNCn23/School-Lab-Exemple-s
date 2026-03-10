#include<stdio.h>
float bahsis(int);
int main()
{
	int gun;
	printf("Gun sayisini giriniz :");
	scanf("%d",&gun);
	printf("\n---------------------------------");
	printf("\nKutudaki toplam tahmini bahsis tutari %.2f TL ",bahsis(gun));
	return 0;
}
float bahsis(int x)
{
	int i;
	float toplam=10.0;
	for(i=1;i<=x;i++){
		toplam= toplam * 2.0;
	}
	return toplam;
}
