#include<stdio.h>
int main()
{
	int ay,ucret,ihbar,tazminat;// aylik sure=ay,aylik ucret=ucret,ihbar suresi=ihbar,ihbar tazminati=tazminat //
	printf("Toplam calisma suresi    :");
	scanf("%d",&ay);
	printf("\n Aylik ucretinizi giriniz :");
	scanf("%d",&ucret);
	printf("\n ----------------------------------------");
	if( ay <= 6 ){
	   ihbar=14;
       tazminat=(ucret/30)*ihbar;}
    else if ( ay <= 18 ){
       ihbar=28;
       tazminat=(ucret/30)*ihbar;}
    else if( ay <= 36 ){
       ihbar=42;
       tazminat=(ucret/30)*ihbar;}
	else{
	   ihbar=56;
       tazminat=(ucret/30)*ihbar;}
    printf("\n Ihbar suresi               :%d ",ihbar);
	printf("\n Ihbar tazminati            :%d ",tazminat);
	return 0;  
}   
