#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the Array: ";
    cin>>n;
    int arr[n];
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<"Maximum element of the Array is: "<<max<<endl;
    return 0;
}
