#include<stdio.h>
int main(){

    int yas,i,birey;
    float ucret=1.0;

    printf("ailedeki birey sayisi kac :");
    scanf("%d" ,&birey);

printf("\n %d  birey",birey);
    for(i=1;i<=birey;i++){
       printf("%d kisinin yaslarini giriniz :" ,i);
       scanf("%d" ,&yas);
       switch(yas){
           case 1 ... 10:
            ucret += 1;
        	break;
        case 11 ... 17:
            ucret +=  (1.5);
        	break;
        case 18 ... 26:
            ucret +=  (4.75);
        	break;
        case 27 ... 50:
        	ucret +=  (7);
        	break;
        case 51 ... 349223412:
         	ucret +=  (5.25);
        	break; }
    }
    printf("odenecek toplam tutar =%.2f TL" ,ucret-1);
    return 0;
}
