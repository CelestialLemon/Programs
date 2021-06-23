#include<stdio.h>
void increase(int* arr)
{
    int i;
    for(i=0;i<3;i++)
    {
        arr[i]++;
    }

}

void main()
{
    int a[3]={21,22,26};
    increase(a);
    printf("%d %d %d",a[0],a[1],a[2]);

}
