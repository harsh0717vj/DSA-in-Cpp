#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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
    sort(v.begin(),v.end());
    cout<<"SORTED ARRAY: ";
    for(int i=0;i<n;i++){
        cout<<v[i] <<" ";
    }
    cout<<endl;
    int target;
    cout<<"Enter element whose Lower Bound is to be searched: ";
    cin>>target;
    for(int i=0;i<n;i++){
        if(v[i]>=target) cout<<"Lower Bound of "<<target<<" is: "<<v[i-1];
    }
    cout<<endl;
    return 0;
}
