#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        c=n%i;
        if(c==0)
        {
            printf("no is not prime");break;
            break;
        }
    }
        if(c!=0){
        printf( "n0. is prime");  
          }
    
}