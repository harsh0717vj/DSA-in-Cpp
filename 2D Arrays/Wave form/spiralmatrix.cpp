#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enter Rows of the Matrix: ";
    cin>>m;
    int n;
    cout<<"Enter columns of the Matrix: ";
    cin>>n;
    int arr[m][n];
    cout<<"TAKING INPUT: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"ORIGINAL MATRIX: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"SPIRAL FORM: "<<endl;
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr&&minc<=maxc){
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr||minc>maxc) break;
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr||minc>maxc) break;
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr||minc>maxc) break;
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr||minc>maxc) break;
    }
    
    return 0;
}
