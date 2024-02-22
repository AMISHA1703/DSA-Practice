// ARRAY is SORTED or not check
#include<iostream>
using namespace std;
int sor(int *arr,int index)
{
  if(index==sizeof(*arr)) return true;                   ///////////////////////////////// V V V V I I I I
 return ((arr[index]<arr[index+1]|| arr[index]==arr[index+1]) &&sor(arr,index+1));
}
int main()
{
int arr[5]={1,2,2,6,5};
sor(arr,0);
cout <<sor(arr,0);    
    return 0;
}