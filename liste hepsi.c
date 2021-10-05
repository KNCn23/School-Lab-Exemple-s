#include<stdio.h>
#include<stdlib.h>

struct dugum
{
	int yas;
	struct dugum *ptr;
};

int listeyeEkle(struct dugum **,int);
int listedenSil(struct dugum **,int);
void listeyiYaz(struct dugum *);
int monu(void);

int main()
{
	struct dugum *basptr = NULL;
	int secim,yas,s;
	
	while((secim = monu()) != 3)
		switch(secim)
		{
			case 0:
				listeyiYaz(basptr);
				break;
			case 1:
				printf("Yas bilgisini giriniz:");
				scanf("%d",&yas);
				s = listeyeEkle(&basptr,yas);
				if(s != 0)
					printf("Ekleme basarili ");
				else
					printf("Ekleme basarisiz");
				break;
			case 2:
				printf("Silinicek bilgiyi giriniz:");
				scanf("%d",&yas);
				s = listedenSil(&basptr,yas);
				if(s != 0)
					printf("Silme basarili");
				else
					printf("Silme basarisiz");
				break;					
		}
		return 0;
}
