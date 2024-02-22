#include <iostream>
using namespace std;

int fun(int arr[],int size){

}
int main()
{
    int array[5], sum = 0;
    // taking input to an array:---

    cout << " enter values of array :  " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> array[i];
    }
    // printing the array after double the value of array:----

    /* for(int i=0;i<10;i++)
        {
         double the value of array:---
         array[i]=2*array[i];
        cout<< "value at index : " <<array[i]<<endl;
        }
    */ 
       
       // sum of array items :---

       int  valueOfIndex0=0;
       valueOfIndex0=array[0];


    for (int i = 0; i < 5; i++)
    {
        // first  appraoch:--
         sum=sum+array[i];
         
         // second approch:---
        array[0] = array[i] + array[0];   
    }
    cout << "sum of array is :  "<<endl<<"by first  appraoch is: " << array[0]-valueOfIndex0<<endl<<"  By second  appraoch is:  " <<sum<< endl;
 
    fun(array,5);
    return 0;
    }