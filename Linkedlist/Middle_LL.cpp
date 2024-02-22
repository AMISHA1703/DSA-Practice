#include<iostream>
#include<cmath>
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
int Length_of_LL(node* &head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
       
    }
    return count;
}
void print(node* head) {

        node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

node* Middle_of_LL(node * head){
    node* curr=head;
    float mid= (Length_of_LL(head))/2;
   
    while(mid>=1){
        curr=curr->next;
        mid--;
    }
     return curr;   


}
int main(){
    
    node *node1 = new node(10);
    node *node2 = new node(20);
    node *node3 = new node(30);
    node *node4 = new node(40);
    // node *node5 = new node(50);
    node *head = NULL;
    node *tail = NULL;
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    // node4->next = node5;
    node4=NULL;
    tail=node4;
    print(head);
    cout<<endl;
    cout<<Length_of_LL(head)<<endl;
    node* middle=Middle_of_LL(head);
    cout<<middle->data;
  
    


    return 0;
}