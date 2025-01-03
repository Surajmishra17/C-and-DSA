#include<iostream>
#include<deque>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque{
public:
    Node* head;
    Node* tail;
    int s;
    Deque(){
        head = tail = NULL;
        s = 0;
    }
    void pushback(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail; // extra
            tail = temp;
        }
        s++;
    }
    void pushfront(int val){
        Node* temp = new Node(val);
        if(s==0) head = tail = temp;
        else{
            temp->next = head;
            head->prev = temp; // extra
            head = temp;
        }
        s++;
    }
    void popfront(){
        if(s==0){
            cout<<"List is empty";
            return;
        }
        head = head->next;
        if(head) head->prev = NULL;
        if(head==NULL) tail = NULL;
        s--;
    }
    void popback(){
        if(s==0){
            cout<<"List is empty";
            return;
        }
       else if(s==1){
        popfront();
        return;
       }
       Node* temp = tail->prev;
       temp->next = NULL;
       tail = temp;
       s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    int empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        Node* temp = head;
        while(temp->next==NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Deque dq;
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushback(40);
    dq.pushback(50);
    dq.display();
    dq.popback();
    dq.display();
}