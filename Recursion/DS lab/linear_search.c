#include<stdio.h>
#include<conio.h>
#define max 5
//int Lin[max];
//int item,i,loc=-1;
void linear(int LS[], int item)
{
    int loc=-1;
    for( int i=0;i<max;i++)
    {
        
        if(LS[i]==item)
        {
               loc=loc+1;
             printf("item is found  and index is : ");
             printf("  %d \n",i+1); 
             
        }
    }
        printf("number of times element found is %d \n", loc+1);
    
        if(loc==-1)
         {
           printf("item is not found");
           
         } 
}
void main()
{
    int Lin[max],item;
    printf("enter array element");
    for(int i=0; i<max;i++)
    {
        scanf("%d",&Lin[i]);

    }
    printf("enter element to be searched");
    scanf("%d",&item);
    linear(Lin,item);
}
