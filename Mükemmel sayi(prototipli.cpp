#include<stdio.h>
void mukemmelyaz(int,int);

int main()
{
	int bas,son;
	printf("Baslangic ve bitis sayilarini giriniz :");
	scanf("%d%d",&bas,&son);
	mukemmelyaz(bas,son);
}
void mukemmelyaz(int a,int b)
{
	int i,j,toplam;
	for (i=a; i<b ; i++) {

 		toplam=0;
		for(j=1; j<i; j++){
			if(i%j==0){
				toplam = toplam + j;
			}
		}
		if(toplam == i){
			printf("%d\n",i );
		}
	}
}
