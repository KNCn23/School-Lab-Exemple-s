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
