 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
 void display(vector<int>&v){
    int n=v.size();
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;
 }
 int main(){
    int n,x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    vector<int>v;
    cout<<"TAKING ELEMENT OF ARRAYS AS INPUT: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cout<<"ORIGINAL ARRAY: "<<endl;
    display(v);
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1&&v[j]<v[j-1]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
    cout<<"SORTED ARRAY: "<<endl;
    display(v);
    return 0;
 }
