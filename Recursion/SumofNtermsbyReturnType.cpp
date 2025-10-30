#include<iostream>
using namespace std;
int Sum(int n){
    if(n==0) return 0;
    else return n+Sum(n-1);
}
int main(){
    int n;
    cout<<"Enter Number upto which you want to find sum: ";
    cin>>n;
    int add=Sum(n);
    cout<<"Sum: "<<add;
    return 0;
}
