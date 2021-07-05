#include<stdio.h>
int main()
{
	int a=2,b=1,x;
	x=(a++ && (!b) &&b|| ++a);
		printf("%d",x);
}
