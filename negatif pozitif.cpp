#include<stdio.h>
int main()
{   int sayi,rakam,i,negatif,pozitif;
	printf("Kac tane sayi girinceksiniz :");
	scanf("%d",&sayi);
	printf("\nSayilar (%d) adet    :",sayi);
	for(i=1;i<=sayi;i++){
		printf("\n%d. sayiyi giriniz",i);
		scanf("%d",&rakam);
			if(rakam < 0)
				negatif++;
			else
				pozitif++;
	}
	printf("\nGirilen %d sayinin %d tanesi negatif , %d tanesi pozitiftir.",sayi,negatif-1,pozitif);
	return 0;
}
