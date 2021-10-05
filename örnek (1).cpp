#include<stdio.h>

float triangleArea(int,int,int,int,int,int);

int main(){

    int x,y,z,c,k,p;

    printf("1. nokta koordinatlarini giriniz :");
    scanf("%d%d" ,&x,&y);

    printf("2. nokta koordinatlarini giriniz :");
    scanf("%d%d" ,&z,&c);

    printf("3. nokta koordinatlarini giriniz :");
    scanf("%d%d" ,&k,&p);

    printf("-----------------\n");
    printf("Alan = %.2f" ,triangleArea(x,y,z,c,k,p));

    return 0;
}
float triangleArea(int x ,int y ,int z,int c,int k,int p)
{
    float alan;

    alan =   ( (xc + zp + ky) - (zy + kc + xp) ) / 2.0  ;



    if(alan < 0)
        alan = alan*-1.0;

    alan/2;


    return alan;

}
