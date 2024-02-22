#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        this->data=val;
        this->left=NULL;
         this->right=NULL;
    }
};

node* CreateNode(){
    cout<<"enter the value: "<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL ;
    }
    // create root node:
    node* root=new node(data);
    
    //step2:
    root->left= CreateNode();

     //step3:
    root->right= CreateNode();
}
int main()
{
    CreateNode();

    return 0;
}