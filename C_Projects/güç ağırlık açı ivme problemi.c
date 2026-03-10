#include<stdio.h>
int main()
{
	float mass,velocity,force,acc,radius;
	int select,i=1;	
	while(i != 0){
		printf("\n1- Calculate force \n");
		printf("2- Calculate mass \n");
		printf("3- Calculate radius \n");
		printf("4- Calculate acceleration \n");
		printf("5- Exit  \n");
		printf("Selection ? \n");
		scanf("%d",&select);
			switch(select){
				case 1:
					printf("\nEnter the mass, velocity, radius values respectively : ");
					scanf("%f%f%f",&mass,&velocity,&radius);
					acc= (velocity * velocity) / radius;
					force= mass/acc;
					printf("\n Force : %.2f",force);
					break;
				case 2:
					printf("\nEnter the force, velocity, radius values respectively : ");
					scanf("%f%f%f",&force,&velocity,&radius);
					acc= (velocity * velocity)/ radius;
					mass= force * acc;
					printf("\n Mess : %.2f",mass);
				break;
				case 3:
					printf("\nEnter the velocity, acceleration values respectively : ");
					scanf("%f%f" ,&velocity,&acc);
					radius= (velocity * velocity) / acc;
					printf("\n Radius : %.2f",radius);
				break;
				case 4:
					printf("\nEnter the force, mass values respectively : ");
					scanf("%f%f",&force,&mass);
					acc= force / mass;
				break;
				case 5:
				printf("\n Bye...");
				i=0;		
		}
	}		
return 0;		
}
