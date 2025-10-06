#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,x;
    vector<int>v;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    cout<<"Take Array as INPUT: ";
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"ARRAY: ";
    for(int ele: v){
        cout<<ele<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"SORTED ARRAY: ";
    for(int ele: v){
        cout<<ele<<" ";
    }
        cout<<endl;
    cout<<"Majority element: "<<v[n/2];
    return 0;
}
