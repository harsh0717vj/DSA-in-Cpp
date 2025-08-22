#include<iostream>
using namespace std;
int main(){
    int r,c,p,q;
    cout<<"Enter Number of rows of first matrix: ";
    cin>>r;
    cout<<"Enter Number of columns of first matrix: ";
    cin>>c;
    cout<<"Enter Number of rows of second matrix: ";
    cin>>p;
    cout<<"Enter Number of columns of second matrix: ";
    cin>>q;

    if(c==p){
        int arr[r][c];
        int brr[p][q];
        int res[r][q];

        cout<<"TAKING INPUT FIRST MATRIX: "<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }

        cout<<"TAKING INPUT SECOND MATRIX: "<<endl;
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>brr[i][j];
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
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){  
                cout<<brr[i][j]<<" ";
            }
            cout<<endl;
        }

        // Matrix multiplication
        for(int i=0;i<r;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<c;k++){   
                    res[i][j]+=arr[i][k]*brr[k][j];
                }   
            }
        }

        cout<<"PRODUCT MATRIX: "<<endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<q;j++){   
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else 
        cout<<"These two matrices cannot be multiplied"<<endl;

    return 0;
}
