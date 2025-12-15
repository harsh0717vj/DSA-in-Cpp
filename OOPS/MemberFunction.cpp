#include<iostream>
#include<string>
using namespace std;
class Player{
    public:
    string name;//data member
    int score;
    int health;
    void showName(){
        cout<<"Name is: "<<name<<endl;
    }
    void showHealth(){//Member Function
        cout<<"Health is: "<<health<<endl;
    }
    void showScore(){
        cout<<"Score is: "<<score<<endl;
    }
};
int main(){
    int score[100]={};
    int health[100]={};
    Player a;
    a.name="Harsh Vardhan";
    a.score=100;
    a.health=100;
    a.showName();
    a.showHealth();
    a.showScore();
    return 0;
}
