// C program to rotate an array by 
// d elements 
#include <stdio.h> 
  
/* Function to left Rotate arr[] of size n by 1*/
void leftRotatebyOne(int arr[], int n); 
  
/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n) 
{ 
    int i; 
    for (i = 0; i < d; i++) 
        leftRotatebyOne(arr, n); 
} 
  
void leftRotatebyOne(int arr[], int n) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
    arr[i] = temp; 
} 
  
/* utility function to print an array */
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
} 
  
/* Driver program to test above functions */
int main() 
{   int size,arr[1000],d;
    printf("enter sizeof array");
    scanf("%d",&size);
    
    printf("enter arar");
    for(int i = 0; i < size;i++)
	{  
        scanf("%d", &arr[i]);  
    }  
    printf("enter rotation");
    scanf("%d",&d);
    leftRotate(arr, d,size);
    printArray(arr,size);
    return 0; 
}
/*
enter sizeof array10
enter arar1
2
3
4
5
6
7
8
9
0
enter rotation5
6 7 8 9 0 1 2 3 4 5
*/
