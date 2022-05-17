/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct Array 
{
    int A[20];
    int size;
    int length;
    
}
int Get(struct Array arr , int index)
{
    if(index>=0 && index<arr.length)
    {
        return arr.A[index];
        
    }
    return -1;
}

void Set(struct Array *arr, int index)
{
    if(index>=0 && index<arr.length)
        arr->A[index]=x;
        
}
int Max(struct Array arr)
{
    int max= arr.A[0];
    int i;
    for(i = 1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
           max=arr.A[i];
           
    }
    return max;
}

int Min(struct Array arr)
{
    int min= arr.A[0];
    int i;
    for(i = 1; i<arr.length;i++)
    {
        if(arr.A[i]<min)
           min = arr.A[i];
    }
    return min;
}

int Sum(struct Array arr)
{
    int s= 0;
    int i;
    for(i < 0;i<arr.length;i++)
        s+=arr.A[i];
        
    return s;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr)/arr.length);
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5}
    
    printf("%d\n" Get(arr,9));
    
    Set(&arr,0,15);
    

    return 0;
}
