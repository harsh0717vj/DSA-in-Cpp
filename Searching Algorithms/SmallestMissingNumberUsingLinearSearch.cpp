#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int SmallestMissing(vector<int>&v){
    int n=v.size();
    int missing=0;
    int smallest=INT8_MAX;
    for(int i=0;i<n;i++){
        if(v[i]!=i+1){
           return i+1;
        }
    }
    return n+1;
}
int main(){
    int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    vector<int>v;
    cout<<"TAKING INPUT: ";
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: ";
    display(v);
    sort(v.begin(),v.end());
    cout<<"SORTED ARRAY: ";
    display(v);
    int smallestmissing=SmallestMissing(v);
    cout<<"The Smallest Missing Number is: "<<smallestmissing;
    return 0;
}
