#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        this->data = 0;
        this->next = NULL;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void Reverse_LL(node *head)
{
    node *prev = NULL;
    node *curr = head;
    node *next = curr->next;
    // curr->next = prev;
    while (curr != NULL)
    {

        curr->next = prev;
        prev = curr;
        curr = next->next;
        next = next->next;
    }

    head = prev;
}
void print(node *head)
{

    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node *node1 = new node(10);
    node *node2 = new node(20);
    node *node3 = new node(30);
    node *node4 = new node(40);
    node *node5 = new node(50);
    node *head = NULL;
    node *tail = NULL;
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5 = NULL;
    tail = node5;
    cout << "Actual" << endl;
    print(head);
    Reverse_LL(head);
    cout << "reverse" << endl;
    print(head);

    return 0;
}