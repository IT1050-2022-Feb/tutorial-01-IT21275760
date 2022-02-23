/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1,mark2;
	int total=0;
	double average;
	printf("subject 01 :");
	scanf("%d",&mark1);
	printf("subject 02 :");
	scanf("%d",&mark2);
	
	total=mark1+mark2;
	average=(total/2);
	printf("\nAverage is :%.2f",average);

  
  return 0;
}

