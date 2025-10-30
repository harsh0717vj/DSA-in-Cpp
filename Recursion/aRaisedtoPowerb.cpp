#include<iostream>
using namespace std;
int power(int a,int b){
    if(a==0&&b==0) cout<<"Not defined"<<endl;
    else if(b==0) return 1;
    else return a*power(a,b-1);
}
int main(){
    int a,b;
    cout<<"Enter Base Number: ";
    cin>>a;
    cout<<"Enter Exponent: ";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<"  is: "<<power(a,b);
    return 0;
}
