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
int SmallestMissing(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    int ans=-1;
    while(i<=j){
        int mid=i+((j-i)/2);
        if(v[mid]==mid) i=mid+1;
        else{
            ans=mid;
            j=mid-1;
        }
    }
    return ans;
}
int main(){
   int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    vector<int>v;
    cout<<"TAKING INPUT: ";
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: ";
    display(v);
    sort(v.begin(),v.end());
    cout<<"SORTED ARRAY: ";
    display(v);
    int smallestmissing=SmallestMissing(v);
    cout<<"The Smallest Missing Number is: "<<smallestmissing;
    return 0;
}
