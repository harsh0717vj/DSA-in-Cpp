#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int>& v){
    for(int ele : v){
        cout << ele << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v;
    int n, x;
    cout << "Enter Size of the Array: ";
    cin >> n;
    cout << "TAKING ARRAY AS INPUT: " << endl;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    cout << "Original Array: ";
    display(v);

    for(int i = 0; i < n-1; i++){
        int minidx = i;
        for(int j = i+1; j < n; j++){
            if(v[j] < v[minidx]){
                minidx = j;
            }
        }
        swap(v[i], v[minidx]);
    }

    cout << "Sorted Array: ";
    display(v);

    return 0;
}
