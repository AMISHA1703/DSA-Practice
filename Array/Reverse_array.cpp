#include<iostream>
using namespace std;

//brute force appraoch:-------------------------------------------------------------

void Reverse1(int arr[],int size)
{
    int temp;
    for(int i=0;i<size-i-1;i++)
    {
        // temp=arr[size-1-i];
        // arr[size-1-i]=arr[i];
        //  arr[i]=temp;
         swap(arr[i],arr[size-1-i]);
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
       
}
void Reverse2(int arr[],int size)
{
    int left=0;
    int right=size-1;
    for(int left=0,right=size-1;left<right;left++,right--)
    {
        swap(arr[left],arr[right]);
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
       

}

// approach 2 :---------------------------------------------------------------
int main()
{
    int array[5]={1,2,3,7,1};
    int size=5;
    Reverse2(array,size);
return 0 ;
}