#include<iostream>
using namespace std;
void display(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
int main(){
    int n;
    cout<<"Enter Number of Elements in the Array: ";
    cin>>n;
    int arr[n];
    cout<<"Taking Array as Input: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Printing Array: "<<endl;
    display(arr,n,0);
    return 0;
}
