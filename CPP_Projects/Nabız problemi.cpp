#include<stdio.h>
int main(){

    char yas;
    int nabiz,ek,sayi,i,adet=0,s=80;
    while(i == 0){
    	
        printf("Yas grubu ve nabiz degeri =\n");
        scanf(" %c %d" ,&yas,&nabiz);

        switch(yas){
            case'c':
                if(nabiz>=80 && nabiz<=100)
                         printf("Nabiz normal\n");
                   else if(nabiz > 100)
                    printf("Tasikardi\n");
                else if(nabiz < 80 && nabiz > 0){
                		if ( nabiz < s )
                			s = nabiz;
                			printf("Bradikardi\n"); 
				}
                    
                else               
                	printf("Yanlis kategori veya nabiz\n");
	
                    
            break;

            case'y':
                if(nabiz>=60 && nabiz<=100)
                         printf("Nabiz normal\n");
                   else if(nabiz > 100){
                       printf("Tasikardi\n");
                    adet++;
                   }
                else if ( nabiz < 60 && nabiz > 0)
                    printf("Bradikardi");
                else
                    printf("Yanlis katogori veya nabiz \n");
            break;

            case'b':
            	i = 1 ;
            break;

            default:
                printf("Yanlis kategori veya nabiz\n");
            break;

        }

    }
        printf("Program sona erdi...\n");
    printf("Yetiskinlerde tasikardi sayisi %d\n" ,adet);
     printf("Cocuklardaki en dusuk nabiz sayisi  %d" ,s);
    return 0;
}
