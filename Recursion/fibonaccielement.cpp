#include<iostream>
using namespace std;
int fib(int n){
    if(n==1||n==2) return 1;
    else return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Enter Term whose Fibonacci Number is to be found: ";
    cin>>n;
    int term=fib(n);
    cout<<"The "<<n<<"th Fibonacci Number is: "<<term;
    return 0;
}
