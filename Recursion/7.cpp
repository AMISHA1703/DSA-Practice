           //reverse digit  program using recursion
#include<iostream>
using namespace std;
  int s(int n)
{
    if(n==0){ return 0;}
   int d=0;
      d=d+n%10;   
      cout<<d;
      s(n/10);
   
}
int main()
{ 
int n;cin>>n;
   s(n);
   return 0 ;
} 