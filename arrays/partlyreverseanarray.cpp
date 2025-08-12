#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int>v;
    int x,n,y;
    cout<<"Enter Size of the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"ARRAY: "<<endl;
    display(v);
    cout<<"Enter index upto which you want to reverse the Array: ";
    cin>>y;
    reversePart(0,y,v);
    cout<<"PARTLY REVERSED ARRAY: "<<endl;
    display(v);
    return 0;
}
