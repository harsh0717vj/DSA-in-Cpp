#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void nextpermutation(vector<int>v){
    int idx=-1;
    int n=v.size();
    for(int i=n-2;i>=0;i--){
        if(v[i+1]>v[i]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
            reverse(v.begin(),v.end());
            return;
        }
        reverse(v.begin()+(idx+1),v.end());
        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(v[i]>v[idx]){
                j=i;
                break;
            }
        }
        int temp=v[idx];
        v[idx]=v[j];
        v[j]=temp;
        return;
    }
int main(){
    vector<int>v;
    int x;
    int n;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Element: ";
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: "<<endl;
    display(v);
    nextpermutation(v);
    cout<<"NEXT PERMUTATION OF ARRAY: "<<endl;
    display(v);
}
