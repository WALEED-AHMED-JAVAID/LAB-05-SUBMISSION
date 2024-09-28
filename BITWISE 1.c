#include<stdio.h>
int main()
{
	int c, a , b;
	printf("Enter the two numbers: ");
	scanf("%d %d", &a,&b);
	printf("\nThe values before swapping are: %d and %d", a,b);
	a= a^b;
	b= a^b;
	a= a^b;
	printf("\nThe values after swapping are: %d and %d", a,b);
	
}