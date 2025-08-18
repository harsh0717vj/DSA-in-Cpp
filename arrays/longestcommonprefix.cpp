#include<iostream>
#include<vector>
#include<string>
using namespace std;
void input(vector<string>&str,int n){
    string x;
    for(int i=0;i<n;i++){
        cin>>x;
        str.push_back(x);
    }
}
string LongestCommonPrefix(vector<string>&str){
    int n=str.size();
    if(n==0) return "";
    string common=str[0];
    for(int i=1;i<n;i++){
        int j=0;
        while(j<common.size()&&j<str[i].size()&&common[j]==str[i][j]){
            j++;
        }
        common=common.substr(0,j);
        if(common=="") return "";
    }
    return common;
}
int main(){
    vector<string> str;
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cout << "Enter strings: " << endl;
    input(str, n);
    cout << "The Longest Common Prefix is: " << LongestCommonPrefix(str);
    return 0;
}
