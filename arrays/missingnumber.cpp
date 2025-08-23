#include<iostream>
#include<vector>
using namespace std;
int missingnumber(vector<int>&nums){
    int n=nums.size();
    int ans=0;
    for(int num:nums){
        ans^=num;
    }
    for(int i=0;i<=n;i++){
        ans^=i;
    }
    return ans;
}
int main(){
    vector<int>nums;
    int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    cout<<"TAKING ELEMENT: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"MISSING NUMBER: "<<missingnumber(nums)<<endl;
    return 0;
}
