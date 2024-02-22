#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int target;
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);

     int i=0;int j=v.size()-1;
       for(int k=0;k<=j;k++)
       {
           if(v[i]+v[j]==target) cout<<i<<","<<j;
           else if(v[i]+v[j]>target) j--;
           else i++;
       }


    return 0;
}