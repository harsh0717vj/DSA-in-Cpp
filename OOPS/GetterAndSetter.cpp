#include<iostream>
#include<string>
using namespace std;
class Player{
    private:
    string name;
    int score;
    int health;
    public:
    //setter
    void setName(string n){
        name=n;
    }
    void setScore(int s){
        score=s;
    }
    void setHealth(int h){
        health=h;
    }
    //getter
    string getName(){
        return name;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){
    Player a;
    a.setName("Harsh Vardhan");
    a.setScore(100);
    a.setHealth(100);
    cout<<"Name: "<<a.getName()<<endl;
    cout<<"Score: "<<a.getScore()<<endl;
    cout<<"Health: "<<a.getHealth()<<endl;
    return 0;
}
