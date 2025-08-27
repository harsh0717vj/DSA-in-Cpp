#include<iostream>
using namespace std;
int sum(int num){
    int digit=0;
    int sum=0;
    while(num!=0){
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    return sum;
}
int main(){
    int x;
    cout<<"Enter Any Integer: ";
    cin>>x;
    while(x>=10){
        x=sum(x);
    }
    cout<<"Sum of Digits: "<<x<<endl;
    return 0;
}
