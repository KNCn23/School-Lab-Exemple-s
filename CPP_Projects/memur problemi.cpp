#include<stdio.h>
int main()
{
	char durum;
	int izin;
	float yil,sure;
	
    printf("Calisma durumunuzu girniz (Memur m,M - Diger d,D) : ");
    scanf(" %c",&durum);
    printf("\n Toplam calisma surenizi giriniz ( ay olarak )   :");
    scanf("%f",&sure);
    printf("\n--------------------------------------------------");
    yil=sure/12;
    switch(durum){
    	case'm':
        case'M':
        	if( sure <= 12 ){
        	   izin=0;
        	    printf("\n Calisma sureniz = %.0f ay = %.2f yil eder",sure,yil);
	   		    printf("\n Kullanabiliceginiz izin sureniz %d",izin);}
        	else if( sure <= 120 ){
        	    izin=20;
        	    printf("\n Calisma sureniz = %.0f ay = %.2f yil eder",sure,yil);
	   			printf("\n Kullanabiliceginiz izin sureniz %d",izin);}
        	else{
			    izin=30;
			    printf("\n Calisma sureniz = %.0f ay = %.2f yil eder",sure,yil);
	   			printf("\n Kullanabiliceginiz izin sureniz %d",izin);}
			break;
		case'd':
		case'D':
		    if( sure <= 12 ){
        	    izin=0;
        	    printf("\n Calisma sureniz = %.0f ay = %.2f yil eder",sure,yil);
	   			printf("\n Kullanabiliceginiz izin sureniz %d",izin);}
        	else if( sure <= 120 ){
        	    izin=14;
        	    printf("\n Calisma sureniz = %.0f ay = %.2f yil eder",sure,yil);
	   			printf("\n Kullanabiliceginiz izin sureniz %d",izin);}
        	else if ( sure <= 180 ){
			    izin=20;
			    printf("\n Calisma sureniz = %.0f ay = %.2f yil eder",sure,yil);
	  			printf("\n Kullanabiliceginiz izin sureniz %d",izin);}
			else{
			    izin=26;
			    printf("\n Calisma sureniz = %.0f ay = %.2f yil eder",sure,yil);
	   			printf("\n Kullanabiliceginiz izin sureniz %d",izin);}
			break;
}
	if( izin = 0 )
	   printf("\n Uzgunuz tam 1 yýl dolmadigi icin izin hakkiniz yok");
	return 0;
}
