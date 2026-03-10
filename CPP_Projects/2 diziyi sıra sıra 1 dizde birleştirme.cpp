#include<stdio.h>
int main()
{
	float dizia[5],dizib[5],dizic[10];
	int i;
    printf("A dizisinin elemanlarini giriniz (5 tane) \n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&dizia[i]);
        dizic[i*2]=dizia[i];
        
    }
    printf("B dizisinin elemanlarini giriniz (5 tane) \n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&dizib[i]);
        dizic[i*2+1]=dizib[i];
    }
   
    printf("\n C dizisinin elemanlari ");
    for(i=0;i<10;i++)
    {
        printf("%.2f ",dizic[i]);
    }
    
    
    return 0;
}
