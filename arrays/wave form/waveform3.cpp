#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    int arr[c][r];
    cout<<"TAKING INPUT: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"ORIGINAL ARRAY: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"WAVE FORM: "<<endl;
    for(int j=0;j<c;j++){
        if(j%2==0){
            for(int i=0;i<r;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=r-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
