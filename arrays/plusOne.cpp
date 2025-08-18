#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> plusOne(vector<int>& v){
    int n=v.size();
    for(int i=n-1;i>=0;i--){
        if(v[i] < 9){
            v[i] += 1;   
            return v;    
        }
        v[i] = 0;  
    }
    
    v.insert(v.begin(), 1);
    return v;
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
    cout<<"ORIGINAL ARRAY: ";
    display(v);
    v=plusOne(v);
    cout<<"NEW ARRAY: ";
    display(v);
    return 0;
}
