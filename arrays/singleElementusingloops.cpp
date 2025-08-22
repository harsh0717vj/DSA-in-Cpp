#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>nums,int n){
    for(int i=0;i<n;i++){
        bool unique=true;
        for(int j=0;j<n;j++){
            if(i!=j&&nums[i]==nums[j]){
                unique=false;
                break;
        }
        }
        if(unique==true) return nums[i];
    }
}
int main(){
    vector<int>nums;
    int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    cout<<"TAKING INPUT: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    cout<<"ARRAY: "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"SINGLE ELEMENT: "<<singleNumber(nums,n);;
    return 0;
}
