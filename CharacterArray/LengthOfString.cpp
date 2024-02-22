#include<iostream>
#include<string.h>
using namespace std;
int LengthOfString( char array[],int size){
     int index=0;
     while(array[index]!='\0')
     {
        index++;
     }
     return index;
     
}

int main()
{
    char array[100];
    // cin.getline(array,100);       // using cin.getline() input fun space , tab also count as a one character
    cin>>array;                      // only character count
    cout<<array<<'\n';           
    int len=LengthOfString(array,100);
    cout<<"len of string is :  "<<len<<endl;
    cout<<"using builtInFunction strlen :"<<strlen(array);


    
    return 0;

}