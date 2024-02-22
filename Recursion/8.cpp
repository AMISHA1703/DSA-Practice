

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n1, n2;
    cin>>n1>>n2;
    int** arr = new int*[n1];
    for (int i = 0; i < n1; i++){
        int n;
        cin>>n;
        arr[i] = new int[n];
        for (int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    int queries[2][n2];
    for (int i = 0; i < n2; i++){
        cin>>queries[0][i]>>queries[1][i];
    }
    
    /// for output
    for (int i = 0; i < n2; i++){
        cout<<arr[queries[0][i]][queries[1][i]]<<endl;
    }
    return 0;
}