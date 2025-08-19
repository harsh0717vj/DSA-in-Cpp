#include<iostream>
using namespace std;
int root(int x){
    int rt=0;
    for(long long i=1;i*i<=x;i++){
        rt=i;
    }
    return rt;
}
int main(){
    int x;
    cout<<"Enter integer: ";
    cin>>x;   
    cout<<"The Square root of "<<x<<" is: "<<root(x);
    return 0;
}
