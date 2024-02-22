#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    // default constructor:
    node(){
        this->data=0;
        this->next=NULL;
    }
    // parameterized constructor:
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main()
{
    // creation of LL
    node* first;
    node* second;
    cout<<first->data;

    return 0;
}