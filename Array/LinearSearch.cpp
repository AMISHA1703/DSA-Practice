#include<iostream>
using namespace std;
int main()
{
    char array[3]={'a','b','c'};
    char target='d';
    bool flag=0;
    for(int i=0;i<3;i++)
    {
           if(array[i]==target)
           {
            flag=1;
            break;
           }
    }
    if(flag==1)
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<" Not found"<<endl;

    }

return 0 ;
}