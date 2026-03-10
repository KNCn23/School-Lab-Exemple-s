#include<stdio.h>
int asal(int);
int main()
{	int sayi,sonuc=3;
	printf("Sayiyi giriniz :");
	scanf("%d",&sayi);
	sonuc=asal(sayi);
	if(sonuc == 1)
		printf("Sayi asaldir");
	if(sonuc == 0)
		printf("Sayi asal degildir");
	return 0;	
}
int asal(int a)
{
	int i,sonuc=0,x=0;
	for(i=2;i<a;i++)
    {
       if(a%i==0)
       {
           x++;
       }    
    } 
	if(x==0)
    {
        sonuc=1;                    
    }
    else
    {
        sonuc=0;
    } 
	return sonuc;
}
