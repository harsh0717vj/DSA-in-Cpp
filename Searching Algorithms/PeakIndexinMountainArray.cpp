#include<iostream>
#include<vector>
using namespace std;
int PeakElement(vector<int>&v){
    int i=1;
    int j=v.size()-2;
    int ans=-1;
    while(i<=j){
        int mid=i+((j-i)/2);
        if(v[mid]>v[mid-1]&&v[mid]>v[mid+1]){
            ans=mid;
            break;
        }
        else if(v[mid]<v[mid-1]) j=mid-1;
        else i=mid+1;
    }
    return ans;
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
    cout<<"ARRAY: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Peak Element of the Mountain Array is: "<<PeakElement(v);
    return 0;
}
