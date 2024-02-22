#include<iostream>
using namespace std;
void ReverseCount(int n)
{
    if(n==1)
    {
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    ReverseCount(n-1);
}
int main()
{
    int n;
    cin>>n;
    ReverseCount(n);
    return 0;
}