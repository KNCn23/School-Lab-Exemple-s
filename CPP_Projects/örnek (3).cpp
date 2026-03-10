#include<stdio.h>

    int obeb(int,int);

    int main(){
        int sayi1,sayi2;
		
        scanf("%d%d" ,&sayi1,&sayi2);

        printf("%d" ,obeb(sayi1,sayi2));
        return 0;
    }

    int obeb(int s1,int s2)
    {
        int ebob;

            while(s1!=s2){
                if(s1>s2)
                    s1=s1-s2;

                if(s2>s1)
                    s2=s2-s1;
            }
            ebob = s1;

        return ebob;
    }
