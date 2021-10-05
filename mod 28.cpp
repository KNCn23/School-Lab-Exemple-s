#include<stdio.h>
int main()
{
	int s1,s2,i,adet;
	printf("2 adet sayi giriniz ");
	scanf("%d%d",&s1,&s2);
	if( s1 < s2 ){
	for(i=s1;i<=s2;i++){
		if( i %4 == 0 && i %7 == 0 ){
			printf("%d ",i);
			adet++;}
	}}
	if( s2 < s1 ){
	for(i=s2;i<=s1;i++){
		if( i %4 == 0 && i %7 == 0 ){
			printf("%d ",i);
			adet++;}
}}
printf("\n Toplam %d adet sayi vardir ",adet-1);
return 0; }
