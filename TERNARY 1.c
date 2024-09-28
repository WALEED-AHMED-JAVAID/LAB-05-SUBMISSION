#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	a>b ? printf("A is the maximum number") : printf("B is the maximum number");
	return 0;
}