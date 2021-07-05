#include <stdio.h>

int even_or_odd(int number){
    if(number&1)
        printf("odd number");
    else
        printf("even number");
}

int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    
    even_or_odd(number);
    
    return 0;
}
/*
output:
enter the number
7
odd number
*/
