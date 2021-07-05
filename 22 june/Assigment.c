#include <stdio.h>
int main()
{
	int arr[3][4]={ {10,11,12,13},
	{20,21,22,23},
	{30,31,32,33}};
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("address of %dth array = %u %u\n",i,arr[i],*(arr+i));
		for(j=0;j<4;j++)
		{
			printf("%d",arr[i][j]);
			printf("%d",*(*(arr+i)+j));
		}
		printf("\n");
		
	}
/*
output:
address of 0th array = 6487520 6487520
1010111112121313
address of 1th array = 6487536 6487536
2020212122222323
address of 2th array = 6487552 6487552
3030313132323333
*/
