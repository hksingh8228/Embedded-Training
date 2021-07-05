#include<stdio.h>

#define check(x, y)                                     
({                                                      
     if((num) & (1 << pos))                             
        printf("1");                                    
     else                                               
        printf("0");                                    
                                                        
})

int main()
{
  int num = 0x12345678;
  int pos = 4;
  int result;

  check(num, pos);
}

/*
output :
1
*/
