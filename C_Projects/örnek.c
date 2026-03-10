#include <stdio.h>



void recursiveCheck(int temp[][11], int b[][11], int i, int j)
{
temp[i][j]=1;
if((temp[i+1][j]==0 && b[i+1][j]==1) || (temp[i][j+1]==0 && b[i][j+1]==1) || (temp[i][j-1]==0 && b[i][j-1]==1) || (temp[i-1][j]==0 && b[i-1][j]==1))
{
if(temp[i+1][j]==0 && b[i+1][j]==1)
recursiveCheck(temp,b,i+1,j);



if(temp[i][j+1]==0 && b[i][j+1]==1)
recursiveCheck(temp,b,i,j+1);



if(temp[i][j-1]==0 && b[i][j-1]==1)
recursiveCheck(temp,b,i,j-1);



if(temp[i-1][j]==0 && b[i-1][j]==1)
recursiveCheck(temp,b,i-1,j);
}
else
return;
}



int main()
{
int n, index=1, counter=0;
int r, c, i, j;

int a[3][11]={0};
int temp[3][11]={0};

FILE *rptr;

rptr=fopen("input1.txt","r");

fscanf(rptr,"%d",&n);

while(index<=n)
{
fscanf(rptr,"%d%d",&i,&j);
a[i][j]=1;
index++;
}



for(r=0; r<3; r++)
{
for(c=0; c<11; c++)
{
if(temp[r][c]==0 && a[r][c]==1)
{
recursiveCheck(temp,a,r,c);
counter++;
}
}
}


for(r=0; r<3; r++)
{
for(c=0; c<11; c++)
{
if(a[r][c]==1)
printf("*");
else
printf(" ");
}
printf("\n");
}

printf("%d\n",counter);

return 0;

}
