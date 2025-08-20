#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter number of rows and Columns: ";
    cin>>r;
    int arr[r][r];
    cout<<"TAKING INPUT: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"ORIGINAL MATRIX: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++){
        for(int j=i;j<r;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"TRANSPOSE MATRIX: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
