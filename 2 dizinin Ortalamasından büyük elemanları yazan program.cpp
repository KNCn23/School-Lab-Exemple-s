#include<stdio.h>
int main()
{
    int i;
    float toplam=0,ortalama,dizib[5],dizia[5];
    printf("A dizisinin elemanlarini giriniz  :");
    for(i=0;i<5;i++)
    {
        scanf("%f",&dizia[i]);
        toplam=toplam + dizia[i];
    }
    printf("B dizisinin elemanlarini giriniz  :");
    for(i=0;i<5;i++)
    {
        scanf("%f",&dizib[i]);
        toplam=toplam + dizib[i];
    }
	ortalama=toplam/10.0;
	printf("\n Ortalama = %.2f \n",ortalama);
	printf("Ortalamadan buyuk veya esit elemanlar ");
	
	for(i=0;i<5;i++)
	{
		if(dizia[i]>=ortalama)
			printf("%.2f ",dizia[i]);
		if(dizib[i]>=ortalama)
			printf("%.2f ",dizib[i]);	
	}
    
    return 0;

}
