#include<stdio.h>
#include<math.h>

float toplam_Mesafe(int,int,float);

int main(){

    int hiz,aci;
    float sure;

    printf("Ilk hizi giriniz (m/s):");
    scanf("%d" ,&hiz);

    printf("Aciyi giriniz (derece):");
    scanf("%d" ,&aci);

    printf("Sureyi giriniz (s):");
    scanf("%f" ,&sure);

    printf("------------------------\n");
    printf("Cisim %.2f uzaga duser" ,toplam_Mesafe(hiz,aci,sure));

        return 0;
}
