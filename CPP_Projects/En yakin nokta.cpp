#include<stdio.h>
#include<math.h>
void orijineenyakin(int,int,int,int,int,int);
int main()
{
	int noktax1,noktay1,noktax2,noktay2,noktax3,noktay3;
	
		printf("Noktalarin degerlerini giriniz :");
		scanf("%d%d%d%d%d%d",&noktax1,&noktay1,&noktax2,&noktay2,&noktax3,&noktay3);
		orijineenyakin(noktax1,noktay1,noktax2,noktay2,noktax3,noktay3);
	
return 0;
}
void orijineenyakin(int x1,int y1,int x2,int y2,int x3,int y3)
{
	float sonuc1,sonuc2,sonuc3;
	sonuc1=sqrt(x1*x1 + y1*y1);
	sonuc2=sqrt(x2*x2 + y2*y2);
	sonuc3=sqrt(x3*x3 + y3*y3);
	if(sonuc1<sonuc2 && sonuc1 < sonuc3)
		printf("En yakin nokta A(%d,%d)",x1,y1);
	if(sonuc2 < sonuc1 && sonuc2 < sonuc3)
		printf("En yakin nokta B(%d,%d)",x2,y2);
	if(sonuc3 < sonuc2 && sonuc3 < sonuc1)
		printf("En yakin nokta C(%d,%d)",x3,y3);
		
}
