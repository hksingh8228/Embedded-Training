Execute the line and find the output a = 2, b =1, x=(a++ && (!b) && b|| ++a);
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

