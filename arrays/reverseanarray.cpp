#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    
    int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>x;
        v1.push_back(x);
    }
    cout<<"ARRAY: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;vector<int>v2(n);
    cout<<"REVERSED ARRAY: "<<endl;
    for(int i=0;i<n;i++){
        int j=n-1-i;
        v2[i]=v1[j];
        cout<<v2[i]<<" ";
    }
    return 0;
}
