#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>nums,int n){
    int ans=0;
    for(int num:nums){
        ans^=num;
    }
    return ans; 
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
