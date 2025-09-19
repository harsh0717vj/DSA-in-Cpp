#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
}
int main(){
     vector<int>v;
     int x,n;
     cout<<"Enter Size of the Array: ";
     cin>>n;
     cout<<"TAKING ARRAY AS INPUT: "<<endl;
     for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
     }
     cout<<"ORIGINAL ARRAY: "<<endl;
     display(v);
     cout<<"SORTED ARRAY: "<<endl;
     bubbleSort(v);
     display(v);
    return 0;
}
