#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter Number of rows of the matrix: ";
    cin>>r;
    cout<<"Enter Number of colums of the matrix: ";
    cin>>c;
    int arr[r][c];
    int wave[r][c];
    cout<<"TAKING INPUT: "<<endl; 
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
    cout<<"WAVE FORM: "<<endl;
    for(int i=0;i<r;i++){        
       if(i%2==0){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
       }
       else{
        for(int j=c-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
       }
       cout<<endl;
    }
    
    
    return 0;
}
