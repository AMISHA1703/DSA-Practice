           //digit sum prigram using recursion
#include<iostream>
using namespace std;
int s(int n)
{
    if(n==0){ return 0;}
     return  s(n/10)+n%10;
}
int main()
{ 
int n;cin>>n;
    cout<<s(n);
   return 0 ;
} 