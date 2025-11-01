#include<iostream>
using namespace std;
int Stair(int n){
    if(n==1) return 1;
    else if(n==2) return 2;
    else return Stair(n-1)+Stair(n-2);
}
int main(){
    int n;
    cout<<"Enter Number of Stairs: ";
    cin>>n;
    cout<<"Number of ways to climb "<<n<<" stairs is: "<<Stair(n);
    return 0;
}
