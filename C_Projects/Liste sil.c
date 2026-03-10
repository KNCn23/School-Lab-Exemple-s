int listedenSil(struct dugum **p,int yas)
{
	struct dugum *onceptr,*silptr,*geciciptr;
	
	if(yas == (*p)->yas)
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
