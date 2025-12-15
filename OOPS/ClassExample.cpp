#include<iostream>
#include<string>
using namespace std;
class Player{
    public:
    float score;
    float health;
    string name;
};
int main(){
    Player a;
    a.score=99;
    a.health=100;
    a.name="Harsh Vardhan";
    cout<<"Name: "<<a.name<<endl;
    cout<<"Score: "<<a.score<<endl;
    cout<<"Health: "<<a.health<<endl;
    Player b;
    b.name="Monika Mandal";  
    b.score=99.5;
    b.health=100;
     cout<<"Name: "<<b.name<<endl;
    cout<<"Score: "<<b.score<<endl;
    cout<<"Health: "<<b.health<<endl;
    return 0;
}
