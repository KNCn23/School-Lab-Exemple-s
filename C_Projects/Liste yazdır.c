void listeyiYaz(struct dugum * p)
{
	if(p = NULL)
		printf("Liste bos.\n");
	else
	{
		printf("Liste:\n");
		while( p != NULL)
		{
			printf("%d --> ",p->yas);
			p = p->ptr;	
		}
		printf("NULL\n\n");	
	}	
}
