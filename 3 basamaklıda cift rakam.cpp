#include <stdio.h>

int main()
{
    int sayi;
    int cift_adet = 0;
    printf("Sayiyi giriniz (3 basamakli): ");
    scanf("%d", &sayi);

    if (sayi%2 ==0)
    {
        cift_adet = cift_adet +1;
        sayi = sayi /10;
    }
    else
    sayi = sayi /10;
    if (sayi%2 ==0)
    {
        cift_adet = cift_adet +1;
        sayi = sayi /10;
    }
    else
    sayi = sayi /10;
    if (sayi%2 ==0)
    {
        cift_adet = cift_adet +1;
        sayi = sayi /10;
    }
    else
    sayi = sayi /10;

    printf("Sayida %d tane cift rakam vardir.",cift_adet);

    return 0;
}
