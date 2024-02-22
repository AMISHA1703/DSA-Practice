#include <iostream>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode()
    {
        this->data = 0;
        this->next = NULL;
    }
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

ListNode *middleNode(ListNode *&head)
{
    // Tortoise Approach

    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
 
    return slow;
}

ListNode *reverseList(ListNode *&head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;

    while (curr != NULL)
    {
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return prev;
}
bool isPalindrome(ListNode *&head)
{

    // find mid of LL
    ListNode *middle_node = middleNode(head);
    ListNode *head2 = middle_node->next;
    middle_node->next = NULL;
    // reverse second part
    ListNode* heaD2=reverseList(head2);
    // compare
    while (head != NULL &&heaD2 != NULL)
    {
        if (head->data == heaD2->data)
        {
            head = head->next;
            heaD2 = heaD2->next;
        }
        else
        {
            return false;
        }
       
    }
    return true;
}
void print(ListNode *head)
{

    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    ListNode *node1 = new ListNode(10);
    ListNode *node2 = new ListNode(20);
    ListNode *node3 = new ListNode(30);
    ListNode *node4 = new ListNode(20);
    ListNode *node5 = new ListNode(10);
    ListNode *head = NULL;
    ListNode *tail = NULL;
    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    tail = node5;
    print(head);
    cout<< isPalindrome(head)<<endl;
    
    return 0;
}