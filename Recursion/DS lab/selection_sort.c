#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5]={10,6,2,3,9},c=0,min;
    for(int i=0;i<4;i++)
    {
            min=i;
        for(int j=i+1;j<5;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        c=a[i];
        a[i]=a[min];
        a[min]=c;
    }
    for(int i=0;i<5;i++)
    {
    printf("%d   ",a[i]);
    }
}
