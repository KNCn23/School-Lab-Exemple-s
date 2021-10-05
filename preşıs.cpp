#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int main(void) 
{
  int dist[N][N]={0},i,j,min,city1,city2;
  srand(time(NULL));
  for(i=0; i<N; i++)
    for(j=0; j<i; j++)
    {
      dist[i][j] = rand()%991+10; 
      dist[j][i] = dist[i][j];
    }
  printf("Distances:\n    ");
  for(i=0; i<N; i++)
    printf("%4d",i+1);
    printf("\n");
  for(i=0; i<N; i++)
  {
    printf("%4d",i+1);
    for(j=0; j<N; j++)
      printf("%4d",dist[i][j]);
    printf("\n");
  }
  min = dist[0][1];
  city1 = 1;
  city2 = 2;
  for(i=0; i<N; i++)
    for(j=i+1; j<N; j++)
      if(dist[i][j] < min)
      {
        min = dist[i][j];
        city1 = i+1;
        city2 = j+1;
      }
  printf("\nThe closest cities are city-%d and city-%d", city1, city2);
  printf("\nThe distance between them = %d km",min);
  printf("\n");
  return 0;
}
