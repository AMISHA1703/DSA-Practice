#include <iostream>
using namespace std;
int main()
{
    // declaration1 || Creation
    // char array[] = {'a', 'm', 'i', 's', 'h', 'a'};
    // cout << array << endl;


    // declaration2 || creation
    // char array1[2] = {65};
    // cout << array1 << " " << endl;

    // declaration3 || creation
    // char array2[4];

    // input :----

    /* 1. using for loop:
     for(int i=0;i!='\0';i++)  || for(auto char :ch)
     {
        cout<<array2[i]<<" "<<endl;
     }
     */

    // 2. input in one line without using for loop using  cin
    // cin >> array2; /* but there is a problem it can not take  input if we  use **enter,tab,space**  */

    //  output in one line using cout:
    // cout << array2 << " ";



    cout<<"enter sequence of characters";
    char ch[17];
    cin.getline(ch, 17);    // this func is used to read all sequence of characters includeing **space, tab**  but ignor enter;
    cout<<ch<<" ";


    


    return 0;
}