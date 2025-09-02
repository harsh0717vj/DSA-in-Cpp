#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Binarysearch(vector<int>&v,int target){
    int low=0;
    int high=v.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==target){
            cout<<target<<" is found"<<endl;
            return;
        }
        else if(v[mid]<target) low=mid+1;
        else high=mid-1;
    }
    cout<<target<<" is not found";
}
int main(){
    int n,x;
    cout<<"Enter Size of the vector: ";
    cin>>n;
    vector<int>v;
    cout<<"TAKING INPUT: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<"SORTED ARRAY: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int target;
    cout<<"Enter Element to be Searched: ";
    cin>>target;
    Binarysearch(v,target);
    return 0;
}
