#include<stdio.h>
int main()
{ float deprem;
  printf("Righter cinsinden deprem buyuklugunu giriniz ");
  scanf("%f",&deprem);
  printf("\n----------------------------------\n");
  if( deprem < 5 )
  printf("Ufak veya hasarsýz ");
  else if( 5 <= deprem && deprem < 5.5 )
  printf("az");
  else if( 5.5 <= deprem && deprem < 6.5 )
  printf("ciddi");
  else if( 6.5 <= deprem && deprem < 7.5 )
  printf("felaket");
  else
  printf("boku yedin");
  return 0;
}
