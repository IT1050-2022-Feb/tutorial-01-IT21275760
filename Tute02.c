/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include<stdio.h>
int main()
{
	int distance,N_distance=0;
	int rate,N_rate=0;
	printf("Amount to be paid for a rented vehicle\n\n");
	printf("Enter the  travelled distance :");
	scanf("%d",&distance);
	if(distance<=30)
	{
		rate=distance*50;
		printf("Amount is =%d",rate);
	}
	else if(distance>30)
	{
		rate=30*50;
		N_distance=distance-30;
		N_rate=rate+(N_distance*40);
		
		printf("\nAmount is =%d",N_rate);
	}
	return 0;
}

