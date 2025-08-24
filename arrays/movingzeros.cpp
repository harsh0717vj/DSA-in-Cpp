#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
void movezeros(vector<int>&nums){
    int n=nums.size();
    int i=0;
    for(int j=0;j<n;j++){
        if(nums[j]!=0){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
        }
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
    cout<<"ORIGINAL ARRAY: "<<endl;
    display(nums);
    movezeros(nums);
    cout<<"NEW ARRAY: "<<endl;
    display(nums);
    return 0;
}
