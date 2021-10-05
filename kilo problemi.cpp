#include <stdio.h>
int main() {
    char cinsiyet;
    float vki,boy;
    int kilo;
    printf("Kilo(kg) , boy (m) \n");
    scanf("%d%f" ,&kilo,&boy);
    printf("Cinsiyet giriniz:");
    scanf(" %c" ,&cinsiyet);
    vki=kilo/(boy*boy);
    printf("------------------------------------------------\n");
    printf("vucud kitle indeksiniz= %.2f \n" ,vki);
    switch(cinsiyet){
        case 'e':
        case 'E':
            if(vki < 20.7)
              printf("zayifsiniz");
            else if(vki < 26.4)
              printf("Normalsiniz");
            else if(vki < 31.1)
              printf("Sismansiniz");
            else 
              printf("Obezite");
            break;
        case 'k':
        case 'K':
            if(vki < 19.1)
               printf("zayfisin");
             else if(vki < 25.8)
               printf("normalsiniz");
             else if(vki < 32.2)
               printf("Sismansiniz");
             else
               printf("Obezite");
            break;
    }
    return 0;
}
