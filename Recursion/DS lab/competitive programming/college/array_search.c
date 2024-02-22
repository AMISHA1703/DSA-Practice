#include<stdio.h>
#include<conio.h>
void main()
{
    int array[5],x,i;
    printf("elemnt which is searched");
    scanf("%d",&x);
    printf("enter array element");
    for(i=0;i<5;i++)
      {
        scanf("%d",&array[i]);
      }
    for(i=0;i<5;i++)
        {
            if(array[i]==x)
            {
                printf("searchsd element is %d",i);
            }
        }
}