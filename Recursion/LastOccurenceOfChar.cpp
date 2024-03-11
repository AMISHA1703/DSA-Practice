// find last occurence of char in a string using recursion

/* 
    method 1:   searched from left to right
    method 2:   search from right to left
    method 3:    using STL function strrchr()            // this is not recommended to use if you are a beginner
*/


#include<iostream>
#include<string>
using namespace std;
 void OccurrenceFromLtoR(string &str,char ch,int i,int &ans)
{
   if(i>=str.size()){
     return;
 }
if(str[i]==ch){
  ans=i;
}
 OccurrenceFromLtoR(str, ch,i+1,ans);
}
int main(){
  string str;
  cout<<"enter the string"<<endl;
  cin>>str;
  char ch;
  cout<<"enter the char which you want to search"<<endl;
  cin>>ch;
  int ans=-1;
  int i=0;
  OccurrenceFromLtoR(str,ch,i,ans);
  cout<< "last occurence of string " <<str<< " is  at index : "<<ans<<endl;
  return 0;
}
