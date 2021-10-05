#include<stdio.h>
int main()
{
	int i,dizi[30],j,yedek;
	printf("30 tane vize notu giriniz :");
	for(i=0;i<30;i++)
		scanf("%d",&dizi[i]);
	for(j=1;j<30;j++){
		for(i=0;i<30;i++){
			if(dizi[i] > dizi[i+1]){
				yedek = dizi[i];
				dizi[i] = dizi[i+1];
				dizi[i+1] = yedek;}
						}
						}
	printf("En kucuk 5 not : ");
	for(i=0;i<5;i++)
		printf("%d  ",dizi[i]);
		
	printf("En buyuk 5 not : ");
	for(i=25;i<30;i++)
		printf("%d  ",dizi[i]);	
		
	return 0;	
}
