#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int r,c;
    int max=INT_MIN;
    cout<<"Enter number of Rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter Element ("<<i<<","<<j<<"): ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max) max=arr[i][j];
        }
    }
    cout<<"Maximum Element of the Matrix is: "<<max;
    return 0;
}
