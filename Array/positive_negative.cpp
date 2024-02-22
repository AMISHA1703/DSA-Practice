#include <iostream>
using namespace std;


// Approach1----------------------------------------------------------------

void leftnegativeRightPositive(int arr[],int size)
{
    int leftindex = 0;
    int rightindex = 5;
    for (int i = leftindex; leftindex <= rightindex; i++)
    {
        if (arr[leftindex] > 0 && arr[rightindex] < 0)
        {
            swap(arr[leftindex], arr[rightindex]);
            leftindex++;
            rightindex--;
        }
        else if (arr[leftindex] < 0)
        {
            leftindex++;
        }
        else if (arr[rightindex] > 0)
        {
            rightindex--;
        }
    }

}
void PrintArray(int arr[], int size)
{
     for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

}


//Approach2----------------------------------------------------------------------

int main()
{
    int arr[] = {1, 2, 3, -5, 6, 2};
    int size=6;
    leftnegativeRightPositive( arr,size);
    
    PrintArray(arr,size);

    return 0;
}