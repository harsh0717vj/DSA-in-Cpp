#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void display(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n,x;
    cout<<"Enter Number of terms: ";
    cin>>n;
    vector<int>v;
    cout<<"TAKE ARRAY AS INPUT: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: "<<endl;
    display(v);
    vector<int>b{n,0};
    int y=0;
    for(int i=0;i<n;i++){
      int min=INT_MAX;
      int minidx=-1;
      for(int j=0;j<n;j++){
        if(b[j]==1) continue;
        else{
            if(min>v[j]){
                min=v[j];
                minidx=j;
            }
        }
      }
      v[minidx]=y;
      b[minidx]=1;
      y++;
    }
    cout<<"INDEXED ARRAY: "<<endl;
    display(v);
    return 0;
}
