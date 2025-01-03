#include<iostream>
using namespace std;
class Gun{
public:
    int ammo;
    int damage;
    int scope;
};
class Player{
     class Helmet{
        int hp;
        int level;

    public:  // getter
        int setHp(){
            return hp;
        }
        int setLevel(){
            return level;
        }
        // setter
        void getHp(int Hp){
            this->hp = hp;
        }
        void getLevel(){
            this->level = level;
        }
    };
private:
    int health;
    int score;
    int age;
    bool alive;
    Gun gun;
    Helmet helmet;

public: // getter
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    int isalive(){
        return alive;
    }
    Gun getgun(){
        return gun;
    }
    // setter
    void sethealth(int health){
        this->health = health;
    }
    void setage(int age){
        this->age = age;
    }
    void setscore(int score){
        this->score = score;
    }
    void setisalive(bool alive){
        this->alive = alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    void setHelmet(int level){
        Helmet *helmet = new helmet;
        helmet->setlevel(level);
        int health;
        if(level==1){
            health = 25;
        }
        else if(level == 2) health = 50;
        else if(level == 3) health = 100;
        else cout<<"error, invalid level!!";
        helmet->setHp();
        this->helmet = *helmet;
    }
};
int addScore(Player a, Player b){
    return a.getscore()+b.getscore();
}
Player getMaxScorePlayer(Player a,Player b){
    if(a.getscore()>b.getscore()) return a;
    else return b;
}
int main(){
    Player Suraj; // object creation statically
    Player Dev;

    Player* raghav = new Player; // run time, dynamic allocation
    //Player raghavObject = *raghav;
    Gun akm;
    akm.ammo(100);
    akm.damage(50);
    akm.scope(2);

    Suraj.setage(19);
    Suraj.sethealth(100);
    Suraj.setscore(50);
    Suraj.setisalive(true);
    Suraj.setGun(akm);

    Gun awm;
    awm.ammo(15);
    awm.damage(150);
    awm.scope(8);

    Dev.setage(12);
    Dev.sethealth(90);
    Dev.setscore(60);
    Dev.setisalive(true);
    Dev.setGun(awm);
    
    // raghavObject.setscore(40);
    // raghavObject.setage(25);
    raghav->sethealth(55);

    //cout<<raghavObject.getscore()<<endl;
    cout<<raghav->gethealth()<<endl;
    Player sanket = getMaxScorePlayer(Suraj,Dev);
    cout<<sanket.getscore();
}