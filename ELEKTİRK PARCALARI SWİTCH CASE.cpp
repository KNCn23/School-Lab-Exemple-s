#include<stdio.h>
int main()
{
	char parca;
	float indirim,odeme;
	printf("****URUN SECENEKLERI****");
	printf("\n(T veye t):Transistor");
	printf("\n(D veya d):Direnc");
	printf("\n(K veya k):Kondansator");
	printf("\n***********************");
	printf("\nSeciminizi giriniz :");
	scanf(" %c",&parca);
	indirim=0.0;
	switch(parca){
	  case'T':
	  case't':
	   	printf("\nNe kadarlik TRANSISTOR alicaksiniz :");
	   	scanf("%f",&odeme);
	   	if(odeme > 1000)
	   	indirim=odeme/10;
	   	odeme=odeme-indirim;
	   	printf("\n Odeme = %.1f ",odeme);
	   	break;
	  case'D':
	  case'd':
	   	printf("\nNe kadarlik DIRENC alicaksiniz :");
	   	scanf("%f",&odeme);
	   	if(odeme > 100)
	   	indirim=odeme * 5 / 100;
	   	odeme=odeme-indirim;
	   	printf("\n Odeme = %.1f ",odeme);
	   	break;
	  case'K':
	  case'k':
	   	printf("\nNe kadarlik KOMPANSATOR alicaksiniz :");
	   	scanf("%f",&odeme);
	   	if(odeme > 500)
	   	indirim=odeme * 8 / 100;
	   	odeme=odeme-indirim;
	   	printf("\n Odeme = %.1f ",odeme);
	   	break;	    	
}
	return 0;
	
}
