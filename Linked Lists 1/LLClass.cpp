#include<iostream>
using namespace std;
class Node{ // Linked list node
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        } 
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx, int val){
        if(idx==0 || idx>size) cout<<"Invalid index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid index";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"Your list is empty";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        size--;
        cout<<endl;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if(idx==size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for (int i = 1; i <= idx-1; i++)
            {
                temp = temp->next;
            }
            temp->next = (temp->next)->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while (temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
}; // with tail TC = O(1) without tail TC = O(n)
int main(){
    LinkedList ll; // { }
    ll.insertAtTail(10); // {10}
    //ll.display();
    ll.insertAtTail(20); // {10->20->NULL}
    //ll.display();
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    cout<<endl;
    //ll.insertAtTail(80);
    ll.insertAtHead(50);
    ll.display();
    ll.insertAtIdx(4,80);
    cout<<endl;
    ll.display();
    //cout<<endl<<ll.getAtIdx(7);
    ll.deleteAtHead();
    cout<<endl;
    ll.display();
    cout<<endl;
    ll.deleteAtTail();
    ll.display();
    cout<<endl;
    ll.deleteAtIdx(3);
    ll.display();
}