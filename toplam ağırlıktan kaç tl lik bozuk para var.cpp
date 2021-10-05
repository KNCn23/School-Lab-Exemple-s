#include<stdio.h>
float cevirKG(float);
int main()
{
	float miktar;
	printf("Para miktarini nedir?");
	scanf("%f",&miktar);
	printf("Bozukluklarin toplam kg ederi = %.5f",cevirKG(miktar));
}
float cevirKG(float m)
{	float sonuc;
	int x,y,z,c;
	x = m / 1 ;
	m = m - x;
	y = m / 0.5;
	m = m - y;
	c = m / 0.25 ;
	m = m - c;
	z = m / 0.1;
	m = m - z;
	sonuc = (x * 8.2 + y * 6.8 + c * 4 + z * 3.15) / 1000 ;
	return sonuc;
}
