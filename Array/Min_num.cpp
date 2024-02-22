#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int array[5]={1,2,3,4,0};
    int min_num=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(array[i]<min_num)
        {
            min_num=array[i];
        }
    }
    cout<<min_num<<endl;
   cout<<min(2,3)<<endl;
   cout<<max(2,3);
}
