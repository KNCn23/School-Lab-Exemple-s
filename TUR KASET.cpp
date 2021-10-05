#include<stdio.h>
int main()
{
	char tur;
	int sayi,odeme;
	printf("Kullanici kodunu (A,a,B,b,C,c,D,d) ve adeti giriniz");
	scanf(" %c%d",&tur,&sayi);
	switch(tur){
		case'A':
		case'a':
			odeme=sayi*1;
			break;
		case'B':
		case'b':
			odeme=sayi*2;
			break;
		case'C':
		case'c':
			odeme=sayi*3;
			break;
		case'D':
		case'd':
			odeme=sayi*4;
			break;			
	}
	printf("\nBorcunuz %d TL",odeme);
	return 0;
}
