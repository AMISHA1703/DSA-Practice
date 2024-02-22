#include<iostream>
using namespace std;
int s=0,e=8,tar=1;
int bs(int arr [],int s,int e,int tar)
{
if(s>e) {return -1;}
int m=(s+e)/2;
if(arr[m]==tar)
{
    return m;
}
    else if(arr[m]<tar)
    {
return bs(arr,m+1,e,tar);
    }
    return bs( arr,s,m-1,tar);
}

int main()
{
    
    int arr[9]={1,2,3,4,5,6,7,8,9};
   tar=1;
   cout<<bs(arr,s,e,tar)<<endl;
    return 0;
}