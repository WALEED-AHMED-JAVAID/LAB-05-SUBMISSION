#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n%3==0 && n%5==0)
	printf("The number is a divisible of 3 and 5");
	else
	printf("The number is not a divisible of 3 and 5");
	return 0;
}