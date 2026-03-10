#include<stdio.h>
int main()
{
	int sayi,i,y;
	printf("5 ile 20 arasinda bir sayi giriniz  :");
	scanf("%d",&sayi);
	if(sayi <= 20 && sayi >= 5){
		for(y=1;y<=sayi;y++){
			for(i=1;i<=sayi;i++)
			printf("* ");
			printf("\n");
			
	}}
	else 
	printf("HATALI GIRIS ");
return 0;}
