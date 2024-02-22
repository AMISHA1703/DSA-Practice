#include<iostream>
using namespace std;
void msg(int i)
{if(i<0) return; 
    cout<<"hello"<<" "<<i<<" ";
 msg(i-1);
    cout<<"world"<< " "<< i<< " " ;
}
int main()
{
    msg(5);
    return 0;
}