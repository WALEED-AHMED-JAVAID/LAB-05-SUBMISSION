#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	if(age>3)
	{
		if(age>12)
		{
			printf("You are a teenager");
		}
		else
		printf("You are a child");
	}
	else if (age>19)
	{
		if(age>50)
		printf("You are a senior");
		else
		printf("You are an adult");
	}
	else 
	printf("Invalid age");
	return 0;
}