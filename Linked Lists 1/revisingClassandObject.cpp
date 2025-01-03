#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
void Change(Student* s){
    s->name = "Harsh";
}
int main(){
    Student* s = new Student("Suraj mishra",27,92.8);
    //Student* ptr = &s;
    cout<<s->name<<endl;
    Change(s);
    // (*ptr).rno = 45;
    // ptr->name = "Sanket";
    cout<<s->name<<endl;
}