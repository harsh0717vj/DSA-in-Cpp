#include<iostream>
#include<vector>
using namespace std;
int countone(vector<int>&nums){
    int n=nums.size();
    int count=0;
    int maxcount=0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
            maxcount=max(maxcount,count);
        }
        else count=0;
    }
    return maxcount;
}
int main(){
    int n;
    int x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    vector<int>nums;
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
    cout<<"MAXIMUM CONSECUTIVE 1 IN GIVEN ARRAY IS: "<<countone(nums)<<endl;
    return 0;
}
