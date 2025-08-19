#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    int arr[r][c];
    int transpose[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
     }
     cout<<"ORIGINAL MATRIX: "<<endl;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
           transpose[i][j]=arr[j][i];
        }
        cout<<endl;
     }
      cout<<"TRANSPOSE MATRIX: "<<endl;
     for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}
