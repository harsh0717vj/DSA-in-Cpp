#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&nums,int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
vector<int>DisapperedNumber(vector<int>&nums){
    int n=nums.size();
    vector<int>freq(n+1,0);
    for(int num:nums){
        freq[num]=1;
    }
    vector<int>result;
    for(int i=1;i<=n;i++){
        if(freq[i]==0) result.push_back(i);
    }
    return result;
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
    display(nums,n);
    vector<int>result=DisapperedNumber(nums);
    cout<<"DISAPPEARED NUMBER: "<<endl;
    display(result,result.size());
    return 0;
}
