#include<stdio.h>
int main()
{ int gelir,yillik;
  float vergi,aylik,net;
  printf("Burut aylik gelirinizi giriniz ");
  scanf("%d",&gelir);
  yillik=gelir*12;
  printf("\n ----------------------------------- \n");
  printf("Yillik geliriniz                    :%d \n",yillik);
  if( 0 < yillik && yillik <= 10700)
    vergi=yillik*(15/100);
  else  if( yillik <= 26000){
    vergi=((yillik-10700)*1/5)+1605;}
  else if( yillik <= 94000){
  	vergi=((yillik-26000)*27/100)+4665;}
  else
  	vergi=yillik*(35/100);
  aylik=vergi/12;
  net=gelir-aylik;	
  printf("Odemeniz gereken toplam vergi       :%.2f \n",vergi);
  printf("Her ay gelirinizden kesilicek vergi :%.2f \n",aylik);
  printf("Vegisi gesilmis net aylik geliriniz::%.2f \n",net);
  return 0;	
}
