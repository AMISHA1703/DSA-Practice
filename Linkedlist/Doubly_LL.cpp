
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    // default constructor:
    node()
    {
        this->next = NULL;
        this->prev = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<""<<"->";
         temp=temp->next;
    }

}
int main()
{
    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);


    node* head=NULL;
    node* tail=NULL;

     // linking of LL
     
    head=first;
    first->prev = NULL;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = NULL;
    tail=fourth;
    print(head);

    return 0;
}
