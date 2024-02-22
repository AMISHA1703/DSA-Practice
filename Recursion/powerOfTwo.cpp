#include<iostream>
using namespace std;
int Power(int n)
{

    //base case
    if(n==1){
        return 2;
    }

    //recursive relation
    return 2*Power(n-1);             ////// Tail recursion

}
int main()
{
    int n;
    cin>>n;
 cout<<Power(n);
    return 0;
}