#include<iostream>
using namespace std;
int ArrFun(int arr1[],int size){
    cout<<size<<endl;
    cout<<arr1<<" "<<&arr1<<endl;
    cout<<arr1[0]<<" "<<(arr1[4])<<endl;
    
}
int main()
{
    int arr[4]={1,20,3};
    cout<<arr<<" "<<&arr<<" "<<arr[0]<<endl;
    ArrFun(arr,3);
   cout<<*arr<<" "<<*arr+0<<" "<<*(arr+0)<<" "<<arr[0]<<endl;
   cout<<*(arr+1)<<" "<<arr[1]<<endl;
   
    return 0;
}