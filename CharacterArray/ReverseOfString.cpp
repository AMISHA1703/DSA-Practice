#include<iostream>
#include<string.h>
using namespace std;
 void ReverseOfString(char array[],int len){
    int i=0;
    int j=len-1;
    while(i<=j)
    {
        swap(array[i],array[j]);
        i++;
        j--;
    }
 }
int main()
{
     char array[100];
    cin.getline(array,100);
    cout<<"Before string  :"<<array<<endl;
    int len=strlen(array);
    ReverseOfString(array,len);  // length of string is passed instead of size of array because it may be possible we can input less no. of characters and others are empty
     cout<<" after reversal string is: "<<array<<endl;
    return 0;

}


