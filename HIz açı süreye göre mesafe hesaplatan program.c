#include<stdio.h>
#include<math.h>
float totalDistance(float speed,float angle,float time)
{
	float total;
	
	total=speed * cosf(angle) * time;
	return total;
}
int main()
{
	float speed,time,total,angle;
	printf("Enter intial speed (m/s) : ");
	scanf("%f",&speed);
	printf("Enter angle (degrees) : ");
	scanf("%f",&angle);
	printf("Enter time (s) : ");
	scanf("%f",&time);
	printf("--------------------");
	total=totalDistance(speed,angle,time);
	printf("\nThe object will fall %.2f m away.",total);
	return 0;
}
