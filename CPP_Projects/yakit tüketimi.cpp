#include<stdio.h>
int main()
{
	float Bsehir,Bdisi,Isehir,Idisi,Usehir,Udisi,ortalamaB,ortalamaI,ortalamaU;
	int yedek;
	   printf("Birinci aracin sehir ici ve disi tuketim miktarlarini giriniz");
	   scanf("%f%f",&Bsehir,&Bdisi);
	   printf("\nIkinci aracin sehir ici ve disi tuketim miktarlarini giriniz");
	   scanf("%f%f",&Isehir,&Idisi);
	   printf("\nUcuncu aracin sehir ici ve disi tuketim miktarlarini giriniz");
	   scanf("%f%f",&Usehir,&Udisi);
ortalamaB=(Bsehir*55/100)+(Bdisi*45/100);
ortalamaI=(Isehir*55/100)+(Idisi*45/100);
ortalamaU=(Usehir*55/100)+(Udisi*45/100);

    if( ortalamaB < ortalamaI && ortalamaB < ortalamaU )
        yedek=1; 
		   
    else if( ortalamaI < ortalamaU && ortalamaI < ortalamaB )
    	yedek=2;
    	
    else if( ortalamaU < ortalamaI && ortalamaU < ortalamaB )
        yedek=3;
        
    printf("\n -----------------------------------");
    printf("\n En az yakit tuketen arac %d.arac ",yedek);
    
    if( yedek = 1 )
        printf("\n(ortalama yakit tuketimi %.2f )",ortalamaB);

	else if( yedek = 2 ) 
	
	    printf("\n(ortalama yakit tuketimi %.2f )",ortalamaI);
	    
    else if( yedek = 3 ) 
	    printf("\n(ortalama yakit tuketimi %.2f )",ortalamaU); 
	return 0;   
}
