#include<iostream>
using namespace std;
void  print(int i,int n){
    if(i>n) return;
    else cout<<i<<endl;
    print(i+1,n);
}
int main(){
    int n;
    cout<<"Enter Number upto which you want to print: ";
    cin>>n;
    print(1,n);
    return 0;
}
