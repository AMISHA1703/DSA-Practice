#include<iostream>
using namespace std;
int fun(int i)
{
   if(i<2) return i;
  return fun(i-1)+fun(i-2);

}
int main()
{int j=0;cin>>j;
while(j>0){
    int n;
    cin>>n;
    //fun(n);
    cout<<n <<"th is"<<" "<<fun(n)<<endl;
    }    return 0; 

}