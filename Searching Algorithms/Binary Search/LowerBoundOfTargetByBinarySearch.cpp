#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void BinarySearch(vector<int>&v,int target){
    int i=0;
    int j=v.size()-1;
    bool flag=false;
    while(i<=j){
        int mid=i+((j-i)/2);
        if(v[mid]==target){
            flag=true;
           cout<<"Lower Bound of "<<target<<" is: "<< v[i-1]<<endl;
            break;
        }
        else if(v[mid]<target) i=mid+1;
        else j=mid-1;
    }
     if(flag==false) cout<<"Lower Bound of "<<target<<" is: "<<v[j]<<endl;
}
int main(){
    int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    vector<int>v;
    cout<<"Taking Input: ";
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: ";
    display(v);
    sort(v.begin(),v.end());
    cout<<"SORTED ARRAY: ";
    display(v);
    int target;
    cout<<"Enter number whose Lower Bound is to be found: ";
    cin>>target;
    BinarySearch(v,target);
    return 0;
}
