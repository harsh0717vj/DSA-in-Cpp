#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter Number of Rows: ";
    cin>>r;
    cout<<"Enter Number of Columns: ";
    cin>>c;
    int arr[r][c];
    int brr[r][c];
    int sum[r][c];
    cout<<"INPUT FIRST MATRIX: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
     }
     cout<<"INPUT SECOND MATRIX: "<<endl;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>brr[i][j];
        }
     }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        }
     }
     cout<<"FIRST MATRIX: "<<endl;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<"SECOND MATRIX: "<<endl;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<"SUM OF MATRIX: "<<endl;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}
