#include<iostream>
#include<vector>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target)
   {
     vector<int> result;
       for(int i=0;i<nums.size();i++)
       {
           int j=i+1;
           while(j<nums.size())
           {
               if(nums[j]+nums[i]==target)
               {
                result.push_back(i);
                result.push_back(j);

                   return result;
               }
               j++;
           }
       }
       return result;
 } 
int main()
{
    int target=8;
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
    vector<int> ans=twoSum(v,target);
    cout<<ans<<endl;



    return 0;
}


