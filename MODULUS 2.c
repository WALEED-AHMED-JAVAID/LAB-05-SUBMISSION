#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter a number to sum: ");
	scanf("%d", &n);
	while(n!=0)
	sum=0;
	 while(n!=0)
	 {
	 	n%10;
	 	sum= sum+n;
	 	n=n/10;
	 }
	 printf("The sum of the number is: %d", sum);
	 return 0;
}