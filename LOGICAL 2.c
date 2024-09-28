#include<stdio.h>
int main()
{
	int n;
	char c;
	printf("Enter your age: ");
	scanf("%d", &n);
	printf("Are you a Pakistani? (type y for yes and n for no)");
	scanf(" %c",&c);
	if(n>17 && c=='y')
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Uneligible to vote");
	}
	return 0;
}