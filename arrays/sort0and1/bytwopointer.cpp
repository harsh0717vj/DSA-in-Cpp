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
    int i=0;
    int j=v.size()-1;
    while(i<j){
       if(v[j]==1) j--;
       else if(v[i]==0) i++;
       
       else{
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
       }
    }
}
int main(){
    vector<int>v;
    int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: "<<endl;
    display(v);
    sort1(v);
    cout<<"SORTED ARRAY: "<<endl;
    display(v);
    return 0;
}
