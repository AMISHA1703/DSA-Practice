      // Factorial using recursion

#include<iostream>
using namespace std;
int factorial(int n){

    //Base case
    if(n==1){
        return 1;
    }
    // recursive relation
    return n*factorial(n-1);
}


int main()
{
     int n;
     cin>>n;
     cout<<factorial(n)<<endl;
    return  0;
}
