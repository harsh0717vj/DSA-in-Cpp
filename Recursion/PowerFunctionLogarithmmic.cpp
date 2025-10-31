#include<iostream>
using namespace std;
int pow(int a,int b){
    int ans;
    if(b==0) return 1;
    else if(b==1) return a;
    else if(b%2==0) ans=pow(a,b/2)*pow(a,b/2);
    else ans=pow(a,b/2)*pow(a,b/2)*a;
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter Base: ";
    cin>>a;
    cout<<"Enter Exponent: ";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is: "<<pow(a,b);
    return 0;
}
