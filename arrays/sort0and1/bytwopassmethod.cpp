#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort1(vector<int>&v){
    int no0=0;
    int no1=0;
    for(int i=0;i<v.size();i++){
       if(v[i]==0) no0++;
       else no1++;
    }
    for(int i=0;i<v.size();i++){
        if(i<no0) v[i]=0;
        else v[i]=1;
    }
}
int main(){
    vector<int>v;
    int n,x;
    cout<<"Enter size of the Array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter Element "<<i+1<<": ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: "<<endl;
    display(v);
    cout<<"SORTED ARRAY: "<<endl;
    sort1(v);
    display(v);
    return 0;
}
