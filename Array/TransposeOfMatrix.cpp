#include<iostream>
using namespace std;
int main()
{
    int arr[][3]={{1,2,3,},{2,0,3},{1,2,6}};
    int row=3;
    int col=3;
    for(int j=0;j<col;j++)
    {
        for(int i=0;i<j+1;i++)
        {
            swap(arr[j][i],arr[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
return 0 ;
}