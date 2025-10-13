#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Integer whose square root is to be found: ";
    cin>>x;
    int i=0;
    int j=x-1;
    int ans=0;
    while(i<=j){
        int mid=i+((j-i)/2);
        if(mid*mid==x){
            ans=mid;
            break;
        }
        else if(mid*mid<x){
            ans=mid;
             i=mid+1;
        }
        else j=mid-1;
        
    }
    cout<<"Square root of "<<x<<" is: "<<ans;
    return 0;
}
