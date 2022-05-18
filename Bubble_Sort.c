/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void swap(int *x , int *y)
{
    int temp = *x;
       *x = *y;
       *y = temp;
}

void Bubble(int A[], int n)
{
    int i,j;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
                swap(&A[j],&A[j+1]);
                
        }
    }
}

int main()
{
    int A[] = {3,7,9,10,6,5,12,4,11,2};
    int n = 10; int i;
    
    Bubble(A,n);
    
    for(i=0;i<10;i++)
        printf("%d",A[i]);
    printf("\n");

    return 0;
}
