#include<iostream>
#include<limits.h>
using namespace std;
int reverse(int x){
    int digit=0;
    int rev=0;
    int y=0;
    while(x!=0){
        digit=x%10;
        rev=rev*10+digit;
        x/=10;
    }
    if(x<INT_MAX&&x>INT_MIN) y=rev;
    return y;
}
int main(){
    int x;
    cout<<"Enter Integer: ";
    cin>>x;
    cout<<"REVERSED INTEGER: "<<reverse(x)<<endl;
    return 0;
}
