#include<iostream>
using namespace std;
class Node{  //DLL node
public:
    int val;
    Node* next;
    Node* prev; // extra for DLL
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL; // extra for DLL
    }
};
void display(Node* head){ // O(1) space
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
void displayRev(Node* tail){ // O(1) space
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
void displayRec(Node* head){ // O(n) space
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayRec(head->next);
}
void displayRecRev(Node* head){ // O(n) space
    if(head==NULL) return;
    displayRecRev(head->next);
    cout<<head->val<<" ";
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;
    display(a);
    displayRev(e);
}