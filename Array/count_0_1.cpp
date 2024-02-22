#include <iostream>
using namespace std;
int main()
{
    int array[4] = {1, 1, 1, 0};
    int zerocount=0,Onecount=0;
    for (int i = 0; i < 4; i++)
    {
        if(array[i]==0)
        {
            zerocount++;
        }
        else{
                Onecount++;
        }
    }
    
    cout << "No. of Zeros : "<<zerocount<< endl <<"No. of Ones:  "<<Onecount;

    return 0;
}