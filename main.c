/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
}

int BinarySearch(struct Array arr,int key)
{
    int l,mid,h;
    l = 0;
    h = arr.length-1;
    
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key==arr.A[mid])
             return mid;
        else if(key<arr.A[mid])
              h = mid -1;
        else
           l = mid + 1;
    }
    return -1;
}

int RBinSearch(int a[],int l,int h, int key)
{
    int mid;
    
    if(l<=h)
    {
        mid=(l + h)/2;
        if(key == a[mid])
            return mid;
        else if(key<a[mid])
            return RBinSearch(a,l,mid-1,key);
        else
            return RBinSearch(a,mid+1,h,key);
    }
}
int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    
    printf("%d\n", BinarySearch(arr,5));
    return 0;
}
