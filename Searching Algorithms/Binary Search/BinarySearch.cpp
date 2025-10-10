 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 void display(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }
 void BinarySearch(vector<int>&v,int target){
    int low=0;
    int high=v.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==target) cout<<target<<" is Found"<<endl;
        else if(v[mid]>target) high=mid-1;
        else low=mid+1;
    }
    cout<<target<<" is not Found"<<endl;
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
    cout<<"ORIGINAL ARRAY: "<<endl;
    display(v);
    sort(v.begin(),v.end());
    cout<<"SORTED ARRAY: "<<endl;
    display(v);
    int target;
    cout<<"Enter Element to be searched: ";
    cin>>target;
    BinarySearch(v,target);
    return 0;
 }
