#include<iostream>
using namespace std;
class player{
    private:  //Access modifiers -> Public,Private,Protected
    int score;
    int health;

    public: //setter
    void setScore(int s){
        score = s;
    }
    void setHealth(int h){
        health = h;
    }
    // getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
    // void showHealth(){
    //     cout<<"Health is : "<<health;
    // }

    // void showScore(){
    //     cout<<"Score : "<<score;
    // }
};
int main(){
    player amit;
    amit.setScore(10);
    amit.setHealth(100);
    cout<<amit.getScore();
    cout<<endl<<amit.getHealth();
}