#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sortzero(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(v[j]==0){
                swap(v[j],v[j+1]);
            }
        }
    }
}
int main(){
    int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    vector<int>v;
    cout<<"TAKING ARRAY AS INPUT: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    printArray(v);
    sortzero(v);
    cout<<"SORTED ARRAY WITH ALL ZEROS TO END: "<<endl;
    printArray(v);
    return 0;
}
