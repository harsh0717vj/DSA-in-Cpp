 #include<iostream>
 #include<vector>
 #include<climits>
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
    vector<int>v;
    int n,x;
    cout<<"Enter Size of the  Array: ";
    cin>>n;
    cout<<"TAKING ARRAY AS INPUT: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    display(v);
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n-1;j++){
            if(v[j]<min){
                min=v[j];
                minidx=j;
            }
        }
        swap(v[i],v[minidx]);
    }
    display(v);
    return 0;
 }
