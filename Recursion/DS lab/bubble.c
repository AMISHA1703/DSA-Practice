#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5]={8,4,5,9,2};
    int i=0,c=0;
    while(i<4)
    {
       for(int j=0;j<4-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;

            }

        } 
        i++;
    }
    for(int i=0;i<5;i++)
    {
        printf("  %d  ",a[i]);
    }
}
