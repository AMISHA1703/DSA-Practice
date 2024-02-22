#include <iostream>
using namespace std;
int global = 2;
void fun(){
    int global=90;
    ::global=9;
    cout<<global<<endl;
    cout<<::global<<endl;


}
int main()
{
    ::global = 4;
    int global = 1122;
    std::cout << global << std::endl;   // local variable
    std::cout << ::global << std::endl; // accessing global using :: operator
    fun();
    cout<<::global;


    return 0;
}
