#include<stdio.h>
int main()
{
	int sayi1,sayi2,rak1,rak2,rak3,rakam1,rakam2,rakam3;
	printf("Enter two 3 digit integer :\n");
	scanf("%d %d",&sayi1,&sayi2);
	rakam1=sayi1/100;
    rakam2=(sayi1-(rakam1*100))/10;
    rakam3=sayi1-(rakam1*100)-(rakam2*10);
	rak1=sayi2/100;
	rak2=(sayi2-(rak1*100))/10;
    rak3=sayi2-(rak1*100)-(rak2*10);
	printf("          %d\n",sayi1);
	printf("x         %d\n",sayi2);
	printf("-------------\n");
	printf("         %d\n",sayi1*rak3);
	printf("        %d\n",sayi1*rak2);
	printf("+      %d\n",sayi1*rak1);
	printf("-------------\n");
	printf("       %d\n",sayi1*sayi2);
	return 0;
}
