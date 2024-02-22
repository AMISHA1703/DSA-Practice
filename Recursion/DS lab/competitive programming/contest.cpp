#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"enter string"<<endl;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a'||s[i]<='z')
        {
            s[i]=s[i]-32;
       }
       cout<<" "<<endl;
    }
    cout<<s <<" "<<endl;
}