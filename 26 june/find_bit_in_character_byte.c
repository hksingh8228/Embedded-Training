  
#include<stdio.h>
#include<stdint.h>
void decimal_to_binary(char n, int pos);

union abc
{
    char byte[4];
    int num;
};

typedef union abc abc;

int main()
{
    int pos;
    abc p;
    

    p.num = 0x12345678;

    printf("Enter the position\n");
    scanf("%d", &pos);

    if(pos >= 0 || pos <= 7)
       {
           decimal_to_binary(p.byte[0], pos);
       }

    else if(pos > 7 || pos < 16)
        decimal_to_binary(p.byte[1], pos);

    else if(pos > 15 || pos < 24)
        decimal_to_binary(p.byte[2], pos);

    else if(pos > 23 || pos < 32)
        decimal_to_binary(p.byte[3], pos);
}

void decimal_to_binary(char n, int pos)
{
   
    int temp;

    for(int i = 0; i <= pos; i++)
    {
	  temp =  n % 2;
	  n = n / 2;
    }

    printf("bit at position %d is %d\n", pos, temp);


}
/*
output
Enter the position
4
bit at position 4 is 1
*/
