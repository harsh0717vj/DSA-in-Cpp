#include<iostream>
using namespace std;
int Stairs(int n){
    if(n==1) return 1;
    else if(n==2) return 2;
    else if(n==3) return 4;
    else return Stairs(n-1)+Stairs(n-2)+Stairs(n-3);
}
int main(){
    int n;
    cout<<"Enter Number of Stairs: ";
    cin>>n;
    cout<<"Number of Ways to Jump "<<n<<" stairs if maximum 3 steps jumping is allowed: "<<Stairs(n);
    return 0;
}
