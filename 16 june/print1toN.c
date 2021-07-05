/*Write a program to print 1 to N  suing recursion*/

#include <stdio.h>

void print_number(int n)
{
  if(n>0)
  {
    int out =n;
    n--;
    print_number(n);
    printf("%d\n",out);
  }
  return;
  
}
int main()
{
  int num;
  printf(" enter any number: ");
  scanf("%d",&num);
        print_number(num);
        return 0;
        }
/*output
 enter any number: 4
1
2
3
4
*/
