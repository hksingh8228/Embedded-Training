 Program to find the sum of digits of a number until the sum is reduce to 1 digit.
#include<stdio.h>
int main()
{
	long int num;
	int sum=0,rem;

	printf("enter a number: ");
	scanf("%ld",&num);

	while(num/10 !=0)
	{ 
		sum=0;
		while(num!=0)
		{
			rem= num%10;
			sum =+ 10;
			num = num/10;
		}
		num = sum;
	}
	printf("sum= %d",sum);

	return 0;
}

