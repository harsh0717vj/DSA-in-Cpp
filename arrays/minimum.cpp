#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the Array: ";
    cin>>n;
    int arr[n];
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(min>arr[i])min=arr[i];
    }
    cout<<"Minimum element of the Array is: "<<min<<endl;
    return 0;
}
