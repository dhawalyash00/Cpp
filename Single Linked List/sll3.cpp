#include <iostream>

using namespace std;
class node{
public:

   int data;
   node* next;


   node(int value){
   data = value;
   next = NULL;
   }
};
void insertAtHead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}
void insertAtTail(node* &head, int val){
      node* n = new node(val);
      if(head == NULL)
      {
          head = n;
          return;
      }
      node* temp = head;
      while(temp->next != NULL){
        temp = temp->next;

      }
      temp->next = n;

}
void display(node* head){
      node* temp = head;
      while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
      }
      cout<<"NULL"<<endl;
}
bool search(node* head, int key)
{
    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteAtHead(node* &head)
{
    node* todelete = head;
    head = head->next;

    delete todelete;
}

int length(node* head)
{
    int l = 0;
    node* temp = head;
    while(temp != NULL){
        l++;
        temp= temp->next;
    }
    return l;
}

node* kappend(node* &head, int k)
{
    node* newHead;
    node* newTail;
    node* tail = head;

    int l = length(head);
    k = k%l;
    int count = 1;

    while(tail->next != NULL){
            if(count == l-k){
                newTail = tail;
            }
            if(count == l-k+1){
                newHead = tail;
            }
            tail = tail->next;
            count++;
    }

    newTail->next = NULL;
    tail->next = head;
    return newHead;
}

int main()
{
    node* head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    //display(head);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    //deletion(head, 2);
    //display(head);
    //deleteAtHead(head);
    //display(head);
    node* newhead = kappend(head, 3);
    display(newhead);
}
