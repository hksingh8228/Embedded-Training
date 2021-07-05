#include <stdio.h>


int main(){
	
	int count = 0, num = 14, i;

	for(i=0; i<32; i++){
		if((num>>i)&1) count++;
	}
	printf("No of set bits: %d\n", count);

	return 0;
}
/*
output:
No of set bits: 3
*/
