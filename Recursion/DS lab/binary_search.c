#include<stdio.h>
#include<conio.h>
#define max 8 
int Bins[max]={4,5,7,1,2,4,6,0};
int  Binary(int Bins,int beg ,int end, int item);
//int Bins[max]={4,5,7,1,2,4,6,0};
int beg=0,end=7,item;
int mid;
void main()
{
    printf("enter item to be search");
    scanf("%d",&item);
    Binary(Bins,beg,end,item);
    //printf("item is : %d", d);

}
int Binary(int Bin,int beg ,int end, int item)
{
    int mid;
    if(end>=beg)
    {
         mid= (beg+end)/2;
        if( Bin[mid]==item)
        {
           return (mid+1);
        }
        else if(Bin[mid]<item)
        {
            return (Bin,mid+1,end,item);
    
        }
        else
        {
          return(Bin,beg,mid-1,item);
        }
    }
    return -1;
}
