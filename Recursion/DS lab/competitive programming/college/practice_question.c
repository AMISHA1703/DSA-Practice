#include<stdio.h>      //implementation stack
#include<conio.h>
int push(int x)
{
    int top=-1,i;
    int stack[3];
    printf("stack");
    for(i=0;i<3;i++)
    {
        printf("enter value");
        scanf("%d",&stack[i]);
        top++;
    }
    // int stack[3];
    // stack[0]=1;
    // stack[1]=2;
 if(top==2)
 {
    printf("overflow");
 }
 else
 {
    top=top+1;
    stack[top]=x;
    printf(" top is %d",top);
 }

}
void main()
{
   int stack[3];
    int x,top;
    push(x);
    printf("enter element to push");
    scanf("%d",&x);
  //  push(x);
} 