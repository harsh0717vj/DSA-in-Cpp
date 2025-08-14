#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector<int>merge(vector<int>v,vector<int>w){
    int i=0,j=0,k=0;
    int n=v.size()+w.size();
     vector<int>m(n);
    while(i<=v.size()-1&&j<=w.size()-1){
        if(v[i]<w[j]){
            m[k]=v[i];
            i++;
        }
        else{
            m[k]=w[j];
            j++;
        }
        k++;
    }
    if(i==v.size()){
        while(j<=w.size()-1){
            m[k]=w[j];
            j++;
            k++;
        }
    }
    if(j==w.size()){
        while(i<=v.size()-1){
        m[k]=v[i];
        i++;
        k++;
    }
    return m;
}
}
int main(){
    vector<int>v;
    vector<int>w;
    int n1,n2,x;
    cout<<"Enter Size of the first Array: ";
    cin>>n1;
    cout<<"Enter Size of the second Array: ";
    cin>>n2;
    for(int i=0;i<n1;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"FIRST ARRAY: "<<endl;
    display(v);
    for(int i=0;i<n2;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>x;
        w.push_back(x);
    }
    cout<<"SECOND ARRAY: "<<endl;
    display(w);
    vector<int>merged=merge(v,w);
    cout<<"MERGED SORTED ARRAY: "<<endl;
    display(merged);
   return 0;
}
