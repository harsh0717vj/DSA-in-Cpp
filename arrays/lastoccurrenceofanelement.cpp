#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>x;
        v.push_back(x);
    }
    int y;
    cout<<"Enter Element to be Checked: ";
    cin>>y;
    int index=-1;
    for(int i=n-1;i>=0;i--){
        if(v[i]==y){
            index=i;
            break;
        }
    }
    if(index==-1){
        cout<<y<<" not found";
    }
    else{
        cout<<"Index at which "<<y<<" last occured is: "<<index;
    }
    return 0;
}
