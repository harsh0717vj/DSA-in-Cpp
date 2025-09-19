#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter String: ";
    cin>>str;
    string nstr="";
    cout<<"ORIGINAL STRING: "<<str<<endl;
    for(int i=0;i<str.size();i++){
        if(str[i]>='X') nstr.push_back(str[i]);
    }
    cout<<"ELEMENT OF STRING GREATER THAN X: "<<nstr<<endl;
    for(int i=0;i<nstr.size()-1;i++){
        for(int j=0;j<nstr.size()-1;j++){
            if(nstr[j]>nstr[j+1]){
                char temp=nstr[j];
                nstr[j]=nstr[j+1];
                nstr[j+1]=temp;
            }
        }
    }
    cout<<"SORTED ARRAY: "<<endl;
    for(int i=0;i<nstr.size();i++){
        cout<<nstr[i];
    }
    return 0;
}
