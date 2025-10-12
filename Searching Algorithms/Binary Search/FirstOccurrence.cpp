#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int FirstOccurrence(vector<int>& v, int target) {
    int i = 0, j = v.size() - 1;
    int ans = -1;

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (v[mid] == target) {
            ans = mid;      
            j = mid - 1;    
        }
        else if (v[mid] < target)
            i = mid + 1;
        else
            j = mid - 1;
    }
    return ans;
}
int main(){
    int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    vector<int>v;
    cout<<"TAKING INPUT: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: ";
    display(v);
    sort(v.begin(),v.end());
    cout<<"SORTED ARRAY: ";
    display(v);
    int target;
    cout<<"Enter Target Element whose First Occurrence is to be found: ";
    cin>>target;
    cout<<"First Occurrence of "<<target<<" is at index: "<<FirstOccurrence(v,target);
    return 0;
}
