#include<stdio.h>
int main()
{
	char isaret;
	int x=1;
	float sayi1,sayi2,sonuc;
	printf("************************************\n");
	printf("*Welcome to the Calculator Program *\n");
	printf("************************************\n");
	printf("Please enter an expression :");
	scanf("%f %c%f",&sayi1,&isaret,&sayi2);
	if(sayi1 == 0 && isaret == '0' && sayi2 == 0)
	{
		printf("\n !!! The Program Ends !!!");
		x=0;
	}
	while(x==1)
	{
		switch (isaret)
		{
			case'+':
				sonuc = sonuc + sayi1 + sayi2;
				printf("\nResult = %.2f",sonuc);
				printf("\nPlease enter an operand and number :");
				scanf(" %c%f",&isaret,&sayi1);
				sayi2 = 0;	
			break;
			case'-':
				sonuc = sonuc - sayi1 - sayi2;
				printf("\nResult = %.2f",sonuc);
				printf("\nPlease enter an operand and number :");
				scanf(" %c%f",&isaret,&sayi1);
				sayi2 = 0;	
			break;
			case'*':
				if(sayi2 == 0 )
					sayi2 = 1;
				sonuc = sonuc * sayi1 * sayi2;
				printf("\nResult = %.2f",sonuc);
				printf("\nPlease enter an operand and number :");
				scanf(" %c%f",&isaret,&sayi1);
				sayi2 = 0;	
			break;
			case'/':
				if(sayi2 == 0 )
					sayi2 = 1;
				sonuc = sonuc / (sayi1 / sayi2);
				printf("\nResult = %.2f",sonuc);
				printf("\nPlease enter an operand and number :");
				scanf(" %c%f",&isaret,&sayi1);
				sayi2 = 0;	
			break;
			case'0':
				x=0;
			break;						
		}
	}
	printf("\n !!! The Program Ends !!!");
	return 0;
}
