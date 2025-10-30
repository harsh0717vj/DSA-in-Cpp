#include<iostream>
using namespace std;
void sum(int i,int n){
    if(n==0){
        cout<<i<<endl;
        return;
    }
    sum(i+n,n-1);
}
int main(){
    int n;
    cout<<"Enter number upto which you want to find sum: ";
    cin>>n;
    sum(0,n);
    return 0;
}
