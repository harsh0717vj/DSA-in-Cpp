#include<iostream>
#include<vector>
using namespace std;
void pascal(vector<vector<int>>&v,int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i) v[i][j]=1;
            else
            v[i][j]=v[i-1][j]+v[i-1][j-1];
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int r;
    cout<<"Enter number of Rows and Columns: ";
    cin>>r;
    vector<vector<int>>v(r,vector<int>(r));
    pascal(v,r);
    return 0;
}
