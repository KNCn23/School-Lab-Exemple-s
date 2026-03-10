#include<stdio.h>
#include<math.h>
float toplamSure(float,int);
int main()
{	float hiz;
	int aci;
	printf("ilk hizi giriniz :(m/s)");
	scanf("%f",&hiz);
	printf("Aciyi giriniz :(derece)");
	scanf("%d",&aci);
	printf("Cisim %.3f sam,ye sonra yere duser ",toplamSure(hiz,aci));
	return 0;
}
float toplamSure(float h,int a)
{
	float toplam,x;
	x=sin(a * M_PI/180);
	toplam= 2 * ( h * x / 9.8);
	return toplam;
}
