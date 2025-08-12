#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversepart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
void reverse(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int>v;
    int n,x,k;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: "<<endl;
    display(v);
    cout<<"Enter number of element should be rotated: ";
    cin>>k;
    if(k>n) k=k%n;
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reverse(v);
    cout<<"REQUIRED ARRAY: "<<endl;
    display(v);
    return 0;
}
