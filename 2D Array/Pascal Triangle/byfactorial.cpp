#include<iostream>
#include<vector>
using namespace std;
int factorial(int n){
    if(n==0||n==1) return 1;
    else return n*factorial(n-1);
}
void pascal(int r){
    int pascaltr=1;
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++){
            pascaltr=factorial(i)/(factorial(j)*factorial(i-j));
            cout<<pascaltr<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int r;
    cout<<"Enter Number of rows and columns: ";
    cin>>r;
    vector<vector<int>>v(r,vector<int>(r));
    pascal(r);
    return 0;
}
