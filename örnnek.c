#include <stdio.h>
struct date{
int day;
int month;
int year;
};
typedef struct date Date;
void increaseDay(Date *ptr);
void decreaseDay(Date *ptr);
int main()
{
int deger,i;
Date a={0 ,0 ,0};
printf("Enter The Date and intager:");
scanf("%d%d%d",&a.day,&a.month,&a.year,&deger);
if(deger > 0)
{
	for(i=0;i<deger;i++)
	{
		increaseDay( &a );
	}
	
}
else
{
	for(i=0;i>deger;i--)
	{
		decreaseDay( &a );
	}
}
printf("New Date \n");
printf("%d/%d/%d",a.day,a.month,a.year);
return 0;
}
void increaseDay(Date *ptr)
{
ptr->day = ptr->day + 1;
if( ptr->day == 28 && ptr->month == 2){
ptr->day = 0;
ptr->month = ptr->month + 1;
if(ptr->month == 12){
ptr->month = 0;
ptr->year = (ptr->year + 1);
}
}
else if(ptr->day == 30 && ptr->month != 1 && ptr->month != 3 && ptr->month != 5 && ptr->month != 7 && ptr->month != 8 && ptr->month != 10 && ptr->month != 12){
ptr->day = 0;
ptr->month = ptr->month + 1;
if(ptr->month == 12){
ptr->month = 0;
ptr->year = (ptr->year + 1);
}	
}
else if(ptr->day == 31)
{
ptr->day = 0;
ptr->month = ptr->month + 1;
if(ptr->month == 12){
ptr->month = 0;
ptr->year = (ptr->year + 1);
}	
}
}
void decreaseDay(Date *ptr)
{
ptr->day = ptr->day - 1;
if( ptr->day == -1 && ptr->month == 3)
{
ptr->day = 28;
ptr->month = ptr->month - 1;
if(ptr->month == -1){
ptr->month = 12;
ptr->year = ptr->year - 1;
}
}
else if(ptr->day == -1 && ptr->month != 1 && ptr->month != 3 && ptr->month != 5 && ptr->month != 7 && ptr->month != 8 && ptr->month != 10 && ptr->month != 12)
{
ptr->day = 31;
ptr->month = ptr->month - 1;
if(ptr->month == -1){
ptr->month = 12;
ptr->year = ptr->year - 1;
}
}
else if(ptr->day == -1)
{
ptr->day = 31;
ptr->month = ptr->month - 1;
if(ptr->month == -1){
ptr->month = 12;
ptr->year = ptr->year - 1;
}	
}
}
