#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter Number of rows: ";
    cin>>r;
    cout<<"Enter Number of columns: ";
    cin>>c;
    int arr[r][c];
    int sum=0;
    cout<<"INPUT: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"MATRIX: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
     }
     cout<<"Sum of all the elements in Matrix is: "<<sum;
    return 0;
}
