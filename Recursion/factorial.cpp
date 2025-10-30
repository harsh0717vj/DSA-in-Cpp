#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0||n==1) return 1;
    else return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter Term whose factorial you want to find: ";
    cin>>n;
    int fact=factorial(n);
    cout<<n<<" Factorial is: "<<fact;
    return 0;
}
