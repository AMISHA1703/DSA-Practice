#include<stdio.h>
#include<conio.h>
void main()
{
    int a[7]={9,67,4,2,8,6,4},c=0;
    // sorting algoritm
    for(int i=1;i<6;i++)
    {
        for(int j=i-1;j>0;j--)
        {
            if(a[i]>a[j])
            {
             c=a[i];
             a[i]=a[j];
             a[j]=c;
            }
        }
    }
    for(int i=0;i<7;i++)
    {
        printf("   %d   ",a[i]);
    }

}