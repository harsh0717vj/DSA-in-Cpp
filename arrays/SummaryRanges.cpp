#include<iostream>
#include<vector>
using namespace std;

vector<string> summaryRange(vector<int>& nums){ 
    int n=nums.size();
    vector<string> ranges;
    for(int i=0;i<n;i++){
        int start=nums[i];
        int end=start;
        for(int j=i+1;j<n;j++){
            if(nums[j]==nums[j-1]+1) end=nums[j];
            else break;
        }
        if(start!=end) ranges.push_back(to_string(start)+"->"+to_string(end));
        else ranges.push_back(to_string(start));
        i = end - start + i;
    }   
    return ranges;
}

int main(){
    vector<int> nums;
    int n, x;
    cout<<"Enter Size of the Array: ";
    cin>>n;
    cout<<"TAKING INPUT: "<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    cout<<"ARRAY: "<<endl;
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    vector<string> result = summaryRange(nums); // store returned vector
    cout<<"SUMMARY RANGES: "<<endl;
    for(string s : result) cout<<s<<" "<<endl; // print each range
    cout<<endl;

    return 0;
}
