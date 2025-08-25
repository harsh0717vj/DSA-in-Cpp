#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Input(vector<int>&nums,int n){
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
}
void display(vector<int>&nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
vector<int>IntersectionElement(vector<int>&nums1,vector<int>&nums2){
    int m=nums1.size();
    int n=nums2.size();
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int i=0;
    int j=0;
    vector<int>result;
    while(i<m&&j<n){
        if(nums1[i]==nums2[j]){
            result.push_back(nums1[i]);
            while(i<m-1&&nums1[i]==nums1[i+1]) i++;
            while(j<n-1&&nums2[j]==nums2[j+1]) j++;
            i++;
            j++;
        }
        else if(nums1[i]<nums2[j]) i++;
        else j++;
    }
    return result;
}
int main(){
    vector<int>nums1;
    vector<int>nums2;
    int m,n;
    cout<<"Enter Size of the first Array: ";
    cin>>m;
    cout<<"Enter Size of the second Array: ";
    cin>>n;
    cout<<"TAKING INPUT OF FIRST ARRAY: "<<endl;
    Input(nums1,m);
    cout<<"TAKING INPUT OF SECOND ARRAY: "<<endl;
    Input(nums2,n);
    cout<<"FIRST ARRAY: "<<endl;
    display(nums1);
    cout<<"SECOND ARRAY: "<<endl;
    display(nums2);
    vector<int>result=IntersectionElement(nums1,nums2);
    cout<<"INTERSECTION ELEMENTS: "<<endl;
    display(result);
    return 0;
}
