#include <stdio.h>
struct time{
int saat;
int dak;
int san;
};
typedef struct time Time;
void birSnArttir(Time *ptr);
int main()
{
Time a = {21, 58, 58};
/* printf("Time ilk halini giriniz :");
scanf("%d%d%d",&a.saat,&a.dak,&a.san);       zamaný bizim girmemizi isterse */
printf("Time ilk hali =  %02d:%02d:%02d\n" ,a.saat, a.dak, a.san );
birSnArttir( &a );
printf("Bir saniye arttirilmis hali= %02d:%02d:%02d\n", a.saat, a.dak, a.san );
birSnArttir( &a );
printf("Bir saniye arttirilmis hali= %02d:%02d:%02d\n", a.saat, a.dak, a.san );
return 0;
}
void birSnArttir(Time *ptr)
{
ptr->san = ptr->san + 1;
if( ptr->san == 60 ){
ptr->san = 0;
ptr->dak = ptr->dak + 1;
if(ptr->dak == 60){
ptr->dak = 0;
ptr->saat = (ptr->saat + 1) % 24;
}
}
}
void birSnAzalt(Time *ptr)
{
ptr->second = ptr->second - 1;
if( ptr->second == -1){
ptr->second = 59;
ptr->minute = ptr->minute - 1;
if(ptr->minute == -1){
ptr->minute = 59;
ptr->hour = ptr->hour - 1;
if(ptr->hour == -1)
ptr->hour = 23;
}
}
}
