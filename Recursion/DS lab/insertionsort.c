                                        // insertion sort 
#include<stdio.h>
#include<conio.h>
void main()
{
int a[8]={0,7,16,1,3,4,5,0};
//sort 
int k,j;
for(int i=1;i<8;i++)
{
    k=a[i];j=i-1;
   // for(j=i-1;j>=0;j--)
   while(j>=0&&a[j]>k)
    {
        
        
         a[j+1]=a[j];

        j=j-1;
       // a[j+1]=k;
    } a[j+1]=k;
} printf("sorted array is :");
for(int i=0;i<8;i++)
{
    printf("  %d  ",a[i]);
}
 }
