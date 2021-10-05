#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int listedenSil(struct dugum **p,int yas)
{
	struct dugum *onceptr,*silptr,*geciciptr;
	
	if(yas == ( *p )->yas)
	{
		geciciptr =*p;
		*p = (*p)->ptr;
		free(geciciptr);
		return yas;
	}
	else
	{
		onceptr = *p;
		silptr = (*p)->ptr;
		
		while(silptr != NULL && silptr-> yas != yas)
		{
			onceptr = silptr;
			silptr = silptr->yas;
		}
		if(silptr != NULL)
		{
			geciciptr = silptr;
			onceptr->ptr = silptr->ptr;
			free(geciciptr);
			return yas;
		}
	}
	return 0;
}
void listeyiYaz(struct dugum * p)
{
	if(p = NULL)
		printf("List is empty.\n");
	else
	{
		printf("List:\n");
		while( p != NULL)
		{
			printf("%d --> ",p->yas);
			p = p->ptr;	
		}
		printf("NULL\n\n");	
	}	
}
int listeyeEkle(struct dugum **p,int yas)
{
	struct dugum *yeniptr;
	struct dugum *onceptr;
	struct dugum *sonraptr;
	
	yeniptr = mallac(sizeof (struct dugum));
	
	if(yeniptr != NULL)
	{
		yeniptr->yas = yas;
		yeniptr->ptr = NULL;
		
		onceptr = NULL;
		sonraptr = *p;
		
		while(sonraptr != NULL && yas > sonraptr->yas)
		{
			onceptr = sonraptr;
			sonraptr = sonraptr->ptr;
		}
		if(onceptr == NULL)
		{
			yeniptr->ptr =*p;
			*p = yeniptr;
			return yas;
		}
		else
		{
			onceptr->ptr = yeniptr;
			yeniptr->ptr = sonraptr;
			return yas;
		}
	}
	else
		return 0;
}
int listedeAra(struct dugum* head, int yas)
{
    struct dugum* current = head;  
    while (current != NULL)
    {
        if (current->key == yas)
            return 1;
        current = current->next;
    }
    return 2;
void push(struct dugum **p,int yas)
{
	struct dugum * yeniPtr;
	
	yeniptr = malloc(sizeof (struct dugum));
	if(yeniptr != NULL)
	{
		yeniptr->yas=yas;
		yeniptr->ptr=*p;
		*p=yeniptr;
	}
}    
struct dugum
{
	int yas;
	struct dugum *ptr;
};
int main()
{
	int i,sayi,j,deger,x;
	struct dugum *basptr = NULL;
	srand(time(NULL));
    for(i=0;i<10;i++)
    {
    	for(j=0;j< 6;j++)
    	{
        	sayi = rand() % 100 + 1;
    	}
    	listeyeEkle(&basptr,yas);
	}
	listeyiYaz(basptr);
	printf("Enter the number to be searched:");
	scanf("%d",&deger);
	x=listedeAra(&dugum,deger);
	if(x == 2)
		printf("NOT FOUND");
	else
	{
		push(&basptr,deger);
		listedenSil(&basptr,deger);
		listeyiYaz(basptr);
	}
	return 0;		
}
