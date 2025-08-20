#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter number of rows and columns: ";
    cin>>r;
    int arr[r][r];
    int transpose[r][r];
    int rot[r][r];

    cout<<"TAKING INPUT: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"ORIGINAL MATRIX: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){   // ✅ fixed
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Doing Transpose
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
           transpose[i][j]=arr[j][i];
        }
    }

    cout<<"TRANSPOSE MATRIX: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

    // Rotate by 90*
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            rot[i][j]=transpose[i][r-1-j];
        }
    }

    cout<<"ROTATED ARRAY: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<rot[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
