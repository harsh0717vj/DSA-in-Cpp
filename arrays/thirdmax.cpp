#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Thirdmax(vector<int>&nums){
    int n=nums.size();
    sort(nums.begin(),nums.end(),greater<int>());
    int max=nums[0];
    int distinctcount=0;
    for(int i=1;i<n;i++){
        if(nums[i]!=nums[i-1]) distinctcount++;
        if(distinctcount==3) return nums[i];
    }
    return max;
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
    cout<<"THIRD MAX: "<<Thirdmax(nums)<<endl;
    return 0;
}
